#include <bits/stdc++.h>

using namespace std;
/*NearestPoint*/
const int MXN = 100005;

struct KDTree {
  struct Node {
    int x,y,x1,y1,x2,y2;
    int id,f;
    Node *L, *R;
  }tree[MXN];
  int n;
  Node *root;
  long long dis2(int x1, int y1, int x2, int y2) {
    long long dx = x1-x2;
    long long dy = y1-y2;
    return dx*dx+dy*dy;
  }
  static bool cmpx(Node& a, Node& b){ return a.x<b.x; }
  static bool cmpy(Node& a, Node& b){ return a.y<b.y; }
  void init(vector<pair<int,int>> ip) {
    n = ip.size();
    for (int i=0; i<n; i++) {
      tree[i].id = i;
      tree[i].x = ip[i].first;
      tree[i].y = ip[i].second;
    }
    root = build_tree(0, n-1, 0);
  }
  Node* build_tree(int L, int R, int dep) {
    if (L>R) return nullptr;
    int M = (L+R)/2;
    tree[M].f = dep%2;
    nth_element(tree+L, tree+M, tree+R+1, tree[M].f ? cmpy : cmpx);
    tree[M].x1 = tree[M].x2 = tree[M].x;
    tree[M].y1 = tree[M].y2 = tree[M].y;

    tree[M].L = build_tree(L, M-1, dep+1);
    if (tree[M].L) {
      tree[M].x1 = min(tree[M].x1, tree[M].L->x1);
      tree[M].x2 = max(tree[M].x2, tree[M].L->x2);
      tree[M].y1 = min(tree[M].y1, tree[M].L->y1);
      tree[M].y2 = max(tree[M].y2, tree[M].L->y2);
    }

    tree[M].R = build_tree(M+1, R, dep+1);
    if (tree[M].R) {
      tree[M].x1 = min(tree[M].x1, tree[M].R->x1);
      tree[M].x2 = max(tree[M].x2, tree[M].R->x2);
      tree[M].y1 = min(tree[M].y1, tree[M].R->y1);
      tree[M].y2 = max(tree[M].y2, tree[M].R->y2);
    }

    return tree+M;
  }
  int touch(Node* r, int x, int y, long long d2){
    long long dis = sqrt(d2)+1;
    if (x<r->x1-dis || x>r->x2+dis || y<r->y1-dis || y>r->y2+dis)
      return 0;
    return 1;
  }
  void nearest(Node* r, int x, int y, int &mID, long long &md2) {
    if (!r || !touch(r, x, y, md2)) return;
    long long d2 = dis2(r->x, r->y, x, y);
    if (d2 < md2 || (d2 == md2 && mID < r->id)) {
      mID = r->id;
      md2 = d2;
    }
    // search order depends on split dim
    if ((r->f == 0 && x < r->x) ||
        (r->f == 1 && y < r->y)) {
      nearest(r->L, x, y, mID, md2);
      nearest(r->R, x, y, mID, md2);
    } else {
      nearest(r->R, x, y, mID, md2);
      nearest(r->L, x, y, mID, md2);
    }
  }
  long long query(int x, int y) {
    int id = 1029384756;
    long long d2 = 102938475612345678LL;
    nearest(root, x, y, id, d2);
    return d2;
    return id;
  }
}tree;
typedef long long LL;

const int N = 1e5+10;

int n, x[N], y[N];
int ord[N];
LL dis[N];
bool ok[N];

inline LL sq(int t) {return (LL)t*t;}

inline LL dist(int x1, int y1, 
               int x2, int y2) {
  return sq(x1-x2) + sq(y1-y2);
}

void dq(int l, int r) {
  //printf("dq %d %d\n", l, r);
  if (l >= r) return;
  int mid = (l+r) / 2;
  dq(l, mid);

  vector<pair<int, int>> tmp;

  for (int i = l; i <= mid; ++i) if (ok[ord[i]]) {
    tmp.push_back({x[ord[i]]*2, y[ord[i]]*2});
  }
  if (tmp.size()) {
    tree.init(tmp);
    for (int i = mid+1; i <= r; ++i) {
      LL td = tree.query(x[ord[i]], y[ord[i]]);
      if (td <= dis[ord[i]]) {
        ok[ord[i]] = 0;
      }
    }
  }

  dq(mid+1, r);
}

int main() {
#ifdef ONLINE_JUDGE
  freopen("nothingontv.in", "r", stdin);
  freopen("nothingontv.out", "w", stdout);
#endif
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    scanf("%d%d", x+i, y+i);
    dis[i] = dist(x[i], y[i], 0, 0);
    ord[i] = i;
  }
  sort(ord+1, ord+1+n, [&](int a, int b){
    return dis[a] < dis[b];
  });
  fill(ok+1, ok+1+n, 1);
  dq(1, n);
  vector<int> ans;
  for (int i = 1; i <= n; ++i) if (ok[i]) ans.push_back(i);
  printf("%d\n", (int)ans.size());
  for (size_t i = 0; i < ans.size(); ++i)
    printf("%d%c", ans[i], " \n"[i+1==ans.size()]);
}
