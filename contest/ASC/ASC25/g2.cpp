#include <bits/stdc++.h>
using namespace std;
#define N 6
bool okay[ N ][ N ][ N ];
vector< pair< int , pair< int , int > > > ans[ N ][ N ][ N ];
void build(){
okay[5][5][5] = true;
ans[5][5][5]={{1,{1,1}},{3,{1,2}},{3,{3,3}},{5,{3,2}},{5,{4,4}},{4,{2,4}},{2,{2,3}},{2,{1,5}},{3,{3,5}},{1,{4,5}},{2,{4,3}},{2,{2,2}},{3,{4,2}},{5,{4,3}},{5,{2,4}},{3,{3,4}},{3,{2,2}},{1,{2,1}},{1,{3,3}},{1,{5,2}},{3,{5,3}},{5,{5,2}},{4,{5,4}},{2,{5,3}},{1,{5,5}},{3,{4,5}},{1,{3,5}},{1,{2,3}},{3,{1,3}},{3,{3,2}},{5,{2,2}},{3,{2,1}},{4,{2,3}},{4,{3,1}},{4,{1,2}},{3,{1,4}},{2,{1,2}},{2,{3,1}},{4,{3,2}},{3,{5,2}},{2,{3,2}},{1,{1,2}},{2,{1,4}},{4,{1,3}},{4,{2,1}},{2,{1,1}},{1,{3,1}},{1,{4,3}},{1,{2,4}},{3,{2,5}},{5,{3,5}},{5,{5,4}},{3,{5,5}},{4,{3,5}},{2,{4,5}},{3,{4,3}},{1,{5,3}},{1,{4,1}},{3,{5,1}},{5,{4,1}},{5,{3,3}},{5,{2,5}},{4,{4,5}},{2,{5,5}},{2,{3,4}},{2,{4,2}},{2,{5,4}},{4,{5,3}},{5,{5,1}},{3,{4,1}},{1,{5,1}},{1,{3,2}},{2,{5,2}},{2,{4,4}},{4,{4,3}},{4,{5,5}},{5,{5,3}},{4,{5,1}},{2,{4,1}},{4,{4,2}},{4,{3,4}},{5,{1,4}},{3,{2,4}},{1,{1,4}},{3,{1,5}},{2,{3,5}},{1,{1,5}},{2,{1,3}},{2,{2,5}},{4,{1,5}},{5,{1,3}},{5,{2,1}},{3,{1,1}},{5,{1,2}},{4,{1,4}},{4,{2,2}},{5,{4,2}},{4,{4,4}},{4,{5,2}},{2,{5,1}},{4,{4,1}},{4,{3,3}},{5,{3,1}},{4,{1,1}},{3,{3,1}},{2,{3,3}},{2,{2,1}},{3,{2,3}},{1,{2,2}},{2,{2,4}},{4,{2,5}},{5,{4,5}},{3,{4,4}},{1,{5,4}},{1,{4,2}},{1,{3,4}},{1,{1,3}},{1,{2,5}},{1,{4,4}},{3,{5,4}},{5,{5,5}},{5,{3,4}},{5,{1,5}},{5,{2,3}},{5,{1,1}}};
okay[2][5][5] = true;
ans[2][5][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{1,{4,4}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{1,{4,3}},{1,{5,1}},{2,{5,3}},{1,{5,5}},{2,{3,5}},{2,{1,4}},{2,{2,2}},{2,{4,1}},{2,{3,3}},{2,{4,5}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{5,2}},{2,{4,4}},{1,{4,2}},{1,{5,4}},{1,{3,5}},{2,{1,5}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{5,1}},{2,{4,3}},{2,{5,5}},{2,{3,4}},{2,{1,3}},{2,{2,5}},{1,{4,5}},{1,{5,3}},{1,{4,1}},{2,{2,1}},{2,{4,2}},{2,{5,4}},{1,{5,2}}};
okay[5][2][5] = true;
ans[5][2][5]={{1,{1,1}},{2,{1,3}},{1,{1,5}},{3,{1,4}},{2,{1,2}},{1,{1,4}},{3,{1,3}},{2,{1,1}},{1,{1,3}},{2,{1,5}},{4,{1,4}},{3,{1,2}},{2,{1,4}},{1,{1,2}},{3,{1,1}},{4,{1,3}},{5,{1,1}},{5,{2,3}},{5,{1,5}},{3,{2,5}},{1,{2,4}},{2,{2,2}},{4,{2,1}},{3,{2,3}},{4,{2,5}},{2,{2,4}},{1,{2,2}},{3,{2,1}},{5,{2,2}},{4,{2,4}},{4,{1,2}},{5,{1,4}},{3,{1,5}},{1,{2,5}},{2,{2,3}},{1,{2,1}},{3,{2,2}},{5,{2,1}},{4,{2,3}},{5,{2,5}},{3,{2,4}},{1,{2,3}},{2,{2,5}},{4,{1,5}},{5,{1,3}},{4,{1,1}},{2,{2,1}},{4,{2,2}},{5,{2,4}},{5,{1,2}}};
okay[5][5][2] = true;
ans[5][5][2]={{1,{1,1}},{2,{3,1}},{1,{5,1}},{3,{4,1}},{2,{2,1}},{1,{4,1}},{3,{3,1}},{2,{1,1}},{1,{3,1}},{2,{5,1}},{4,{4,1}},{3,{2,1}},{2,{4,1}},{1,{2,1}},{3,{1,1}},{4,{3,1}},{5,{1,1}},{5,{3,2}},{5,{5,1}},{3,{5,2}},{1,{4,2}},{2,{2,2}},{4,{1,2}},{3,{3,2}},{4,{5,2}},{2,{4,2}},{1,{2,2}},{3,{1,2}},{5,{2,2}},{4,{4,2}},{4,{2,1}},{5,{4,1}},{3,{5,1}},{1,{5,2}},{2,{3,2}},{1,{1,2}},{3,{2,2}},{5,{1,2}},{4,{3,2}},{5,{5,2}},{3,{4,2}},{1,{3,2}},{2,{5,2}},{4,{5,1}},{5,{3,1}},{4,{1,1}},{2,{1,2}},{4,{2,2}},{5,{4,2}},{5,{2,1}}};
ans[1][1][1]={{1,{1,1}}};
ans[1][3][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{2,4}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{1,4}},{1,{2,2}},{1,{3,4}}};
ans[1][4][3]={{1,{1,1}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{4,2}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{3,3}},{1,{4,1}},{1,{2,2}},{1,{4,3}}};
ans[1][4][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{4,2}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{1,{4,4}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{1,{4,3}},{1,{3,5}},{1,{1,4}},{1,{2,2}},{1,{4,1}},{1,{3,3}},{1,{4,5}}};
ans[1][5][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{2,4}},{1,{4,3}},{1,{5,1}},{1,{3,2}},{1,{4,4}},{1,{5,2}},{1,{3,3}},{1,{1,4}},{1,{2,2}},{1,{4,1}},{1,{5,3}},{1,{3,4}},{1,{1,3}},{1,{2,1}},{1,{4,2}},{1,{5,4}}};
ans[1][5][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,5}},{1,{5,4}},{1,{4,2}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{1,{3,3}},{1,{4,1}},{1,{5,3}},{1,{4,5}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{1,{5,2}},{1,{4,4}},{1,{3,2}},{1,{5,1}},{1,{4,3}},{1,{5,5}}};
ans[2][3][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{2,4}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{1,4}},{1,{2,2}},{1,{3,4}},{2,{1,4}},{2,{2,2}},{2,{3,4}},{2,{1,3}},{2,{2,1}},{2,{3,3}},{2,{1,2}},{2,{2,4}},{2,{3,2}},{2,{1,1}},{2,{2,3}},{2,{3,1}}};
ans[2][3][5]={{1,{1,1}},{1,{3,2}},{1,{1,3}},{1,{3,4}},{1,{1,5}},{2,{3,5}},{2,{1,4}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{2,5}},{1,{2,3}},{1,{3,1}},{2,{1,1}},{2,{3,2}},{1,{1,2}},{1,{2,4}},{2,{2,2}},{2,{3,4}},{2,{1,5}},{1,{3,5}},{1,{1,4}},{1,{2,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{1,{2,1}},{1,{3,3}},{1,{2,5}}};
ans[2][4][3]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{4,1}},{1,{3,3}},{1,{1,2}},{2,{3,2}},{2,{1,1}},{1,{1,3}},{1,{3,2}},{2,{1,2}},{2,{3,3}},{2,{4,1}},{1,{2,1}},{1,{4,2}},{2,{2,2}},{2,{4,3}},{2,{3,1}},{2,{2,3}},{2,{4,2}},{2,{2,1}},{2,{1,3}}};
ans[2][4][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{2,{1,4}},{2,{2,2}},{2,{4,1}},{2,{3,3}},{2,{2,1}},{1,{4,1}},{2,{4,3}},{2,{3,1}},{2,{1,2}},{2,{2,4}},{1,{4,4}},{2,{4,2}},{2,{3,4}},{2,{1,3}},{2,{3,2}},{2,{1,1}},{2,{2,3}},{2,{4,4}},{1,{4,2}},{1,{3,4}}};
ans[2][4][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{1,{4,4}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{2,{1,1}},{2,{2,3}},{2,{3,1}},{2,{1,2}},{2,{2,4}},{2,{4,5}},{2,{3,3}},{2,{4,1}},{1,{4,3}},{1,{3,5}},{2,{1,5}},{2,{3,4}},{2,{4,2}},{2,{2,1}},{1,{4,1}},{2,{4,3}},{2,{3,5}},{2,{1,4}},{2,{2,2}},{1,{4,2}},{2,{4,4}},{2,{3,2}},{2,{1,3}},{2,{2,5}},{1,{4,5}}};
ans[2][5][3]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{5,1}},{2,{5,3}},{2,{4,1}},{2,{3,3}},{2,{1,2}},{2,{3,1}},{2,{5,2}},{1,{3,2}},{1,{1,3}},{2,{1,1}},{2,{2,3}},{1,{2,1}},{1,{4,2}},{2,{2,2}},{2,{4,3}},{2,{5,1}},{1,{5,3}},{1,{4,1}},{1,{2,2}},{2,{4,2}},{2,{2,1}},{2,{1,3}},{2,{3,2}},{1,{1,2}},{1,{3,3}},{1,{5,2}}};
ans[2][5][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{5,1}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{2,{1,2}},{2,{2,4}},{2,{3,2}},{2,{4,4}},{1,{4,2}},{1,{5,4}},{2,{5,2}},{2,{3,1}},{2,{4,3}},{2,{5,1}},{1,{5,3}},{1,{4,1}},{2,{2,1}},{2,{1,3}},{2,{3,4}},{2,{5,3}},{2,{4,1}},{2,{2,2}},{2,{1,4}},{2,{3,3}},{2,{5,4}},{1,{5,2}},{1,{4,4}},{2,{4,2}},{2,{2,3}},{2,{1,1}}};
ans[3][1][4]={{1,{1,1}},{2,{1,3}},{3,{1,1}},{1,{1,2}},{2,{1,4}},{3,{1,2}},{1,{1,3}},{2,{1,1}},{3,{1,3}},{1,{1,4}},{2,{1,2}},{3,{1,4}}};
ans[3][2][4]={{1,{1,1}},{1,{2,3}},{2,{2,1}},{2,{1,3}},{3,{1,1}},{3,{2,3}},{1,{1,3}},{1,{2,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{1,{2,2}},{1,{1,4}},{2,{1,2}},{2,{2,4}},{3,{2,2}},{3,{1,4}},{1,{2,4}},{1,{1,2}},{2,{1,4}},{2,{2,2}},{3,{2,4}},{3,{1,2}}};
ans[3][2][5]={{1,{1,1}},{3,{1,2}},{1,{1,3}},{3,{1,4}},{1,{1,5}},{3,{2,5}},{1,{2,4}},{3,{2,3}},{2,{2,1}},{1,{2,3}},{2,{2,5}},{2,{1,3}},{3,{1,1}},{1,{2,1}},{3,{2,2}},{1,{1,2}},{2,{1,4}},{2,{2,2}},{3,{2,4}},{1,{2,5}},{3,{1,5}},{1,{1,4}},{2,{1,2}},{2,{2,4}},{1,{2,2}},{3,{2,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{2,{1,5}}};
ans[3][3][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{2,4}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{1,4}},{1,{2,2}},{1,{3,4}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{1,2}},{3,{2,4}},{3,{3,2}},{3,{1,1}},{3,{2,3}},{3,{3,1}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{3,{3,4}},{3,{2,2}},{3,{1,4}}};
ans[3][3][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{3,{3,3}},{3,{2,1}},{3,{1,3}},{3,{2,5}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{2,5}},{3,{2,3}},{3,{1,1}},{3,{3,2}},{3,{2,4}},{3,{1,2}},{3,{3,1}},{1,{3,2}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{2,{3,5}},{3,{1,5}},{3,{3,4}},{3,{2,2}},{3,{1,4}},{3,{3,5}},{2,{1,5}},{1,{3,5}}};
ans[3][4][1]={{1,{1,1}},{2,{3,1}},{3,{1,1}},{1,{2,1}},{2,{4,1}},{3,{2,1}},{1,{3,1}},{2,{1,1}},{3,{3,1}},{1,{4,1}},{2,{2,1}},{3,{4,1}}};
ans[3][4][2]={{1,{1,1}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{3,{1,1}},{3,{3,2}},{1,{2,2}},{1,{4,1}},{2,{2,1}},{2,{4,2}},{3,{2,2}},{3,{4,1}},{1,{4,2}},{1,{2,1}},{2,{4,1}},{2,{2,2}},{3,{4,2}},{3,{2,1}},{1,{3,1}},{1,{1,2}},{2,{3,2}},{2,{1,1}},{3,{3,1}},{3,{1,2}}};
ans[3][4][3]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{4,1}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{1,3}},{2,{2,1}},{2,{3,3}},{2,{4,1}},{2,{2,2}},{2,{4,3}},{3,{4,1}},{3,{3,3}},{3,{1,2}},{3,{3,1}},{3,{2,3}},{3,{4,2}},{3,{2,1}},{3,{1,3}},{1,{1,2}},{3,{1,1}},{3,{3,2}},{1,{4,2}},{3,{4,3}},{3,{2,2}},{2,{4,2}}};
ans[3][4][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{2,{1,4}},{2,{2,2}},{2,{3,4}},{2,{4,2}},{2,{2,1}},{2,{1,3}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{4,1}},{2,{4,3}},{1,{4,1}},{3,{4,2}},{3,{2,3}},{3,{1,1}},{3,{3,2}},{3,{4,4}},{1,{3,4}},{1,{4,2}},{2,{4,4}},{3,{2,4}},{3,{1,2}},{3,{3,1}},{2,{3,3}},{2,{4,1}},{3,{4,3}},{1,{4,4}},{3,{3,4}},{3,{2,2}},{3,{1,4}}};
ans[3][4][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{1,{4,4}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{1,{4,3}},{1,{3,5}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{2,5}},{2,{4,4}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{2,5}},{2,{4,5}},{3,{4,3}},{2,{4,1}},{2,{2,2}},{2,{1,4}},{2,{3,5}},{2,{4,3}},{1,{4,5}},{3,{4,4}},{2,{4,2}},{2,{3,4}},{2,{1,5}},{3,{3,5}},{3,{1,4}},{3,{2,2}},{3,{4,1}},{1,{4,2}},{3,{3,2}},{3,{1,1}},{3,{2,3}},{3,{1,5}},{3,{3,4}},{3,{4,2}},{1,{4,1}},{3,{3,1}},{3,{1,2}},{3,{2,4}},{3,{4,5}}};
ans[3][5][2]={{1,{1,1}},{3,{1,2}},{1,{2,2}},{3,{2,1}},{1,{3,1}},{3,{3,2}},{2,{1,2}},{1,{3,2}},{2,{5,2}},{2,{3,1}},{3,{1,1}},{1,{1,2}},{3,{2,2}},{2,{4,2}},{2,{2,1}},{1,{4,1}},{3,{5,1}},{1,{5,2}},{3,{4,2}},{2,{2,2}},{2,{4,1}},{1,{2,1}},{1,{4,2}},{3,{4,1}},{1,{5,1}},{3,{5,2}},{2,{3,2}},{2,{1,1}},{3,{3,1}},{2,{5,1}}};
ans[3][5][3]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{5,1}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{4,1}},{1,{5,3}},{2,{5,1}},{2,{4,3}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{1,3}},{2,{2,1}},{2,{4,2}},{1,{2,2}},{3,{2,1}},{3,{1,3}},{1,{1,2}},{3,{1,1}},{3,{2,3}},{3,{3,1}},{3,{1,2}},{3,{3,3}},{3,{5,2}},{1,{4,2}},{2,{2,2}},{3,{4,2}},{1,{5,2}},{3,{5,1}},{2,{5,3}},{2,{4,1}},{3,{4,3}},{3,{2,2}},{3,{4,1}},{3,{5,3}},{3,{3,2}},{2,{1,2}},{2,{3,3}},{2,{5,2}}};
ans[3][5][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{5,1}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{2,{1,2}},{2,{2,4}},{2,{3,2}},{2,{4,4}},{2,{5,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{4,1}},{3,{5,3}},{3,{3,2}},{3,{2,4}},{3,{1,2}},{3,{3,1}},{3,{2,3}},{3,{1,1}},{2,{1,3}},{2,{2,1}},{2,{3,3}},{2,{4,1}},{2,{5,3}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{3,{3,4}},{3,{4,2}},{3,{5,4}},{1,{5,3}},{2,{5,1}},{2,{4,3}},{1,{4,1}},{3,{5,1}},{3,{4,3}},{1,{4,2}},{1,{5,4}},{3,{4,4}},{3,{5,2}},{2,{5,4}},{1,{5,2}},{1,{4,4}},{2,{4,2}},{3,{2,2}},{3,{1,4}}};
ans[3][5][5]={{1,{1,1}},{2,{1,3}},{1,{1,5}},{3,{1,4}},{2,{1,2}},{1,{1,4}},{3,{1,3}},{2,{1,1}},{1,{1,3}},{2,{1,5}},{2,{2,3}},{1,{2,1}},{3,{2,2}},{2,{2,4}},{1,{2,2}},{3,{2,1}},{3,{3,3}},{2,{3,1}},{1,{3,3}},{2,{3,5}},{2,{4,3}},{1,{4,1}},{3,{4,2}},{2,{4,4}},{1,{4,2}},{3,{4,1}},{3,{5,3}},{2,{5,1}},{1,{5,3}},{2,{5,5}},{2,{3,4}},{1,{3,2}},{3,{3,1}},{2,{3,3}},{1,{3,1}},{3,{3,2}},{3,{2,4}},{2,{2,2}},{1,{2,4}},{3,{2,3}},{2,{2,1}},{1,{2,3}},{2,{2,5}},{1,{4,5}},{3,{4,4}},{2,{4,2}},{1,{4,4}},{3,{4,3}},{2,{4,1}},{1,{4,3}},{2,{4,5}},{3,{2,5}},{1,{3,5}},{3,{4,5}},{1,{5,5}},{3,{5,4}},{2,{5,2}},{1,{5,4}},{3,{5,5}},{3,{3,4}},{3,{1,5}},{1,{2,5}},{3,{3,5}},{1,{3,4}},{2,{5,4}},{1,{5,2}},{3,{5,1}},{2,{5,3}},{1,{5,1}},{3,{5,2}},{2,{3,2}},{3,{1,2}},{2,{1,4}},{1,{1,2}},{3,{1,1}}};
ans[4][1][3]={{1,{1,1}},{3,{1,2}},{1,{1,3}},{2,{1,1}},{4,{1,2}},{2,{1,3}},{3,{1,1}},{1,{1,2}},{3,{1,3}},{4,{1,1}},{2,{1,2}},{4,{1,3}}};
ans[4][1][5]={{1,{1,1}},{2,{1,3}},{1,{1,5}},{3,{1,4}},{4,{1,2}},{2,{1,1}},{1,{1,3}},{2,{1,5}},{4,{1,4}},{3,{1,2}},{2,{1,4}},{1,{1,2}},{3,{1,1}},{4,{1,3}},{3,{1,5}},{1,{1,4}},{2,{1,2}},{4,{1,1}},{3,{1,3}},{4,{1,5}}};
ans[4][2][3]={{1,{1,1}},{1,{2,3}},{2,{2,1}},{2,{1,3}},{3,{1,1}},{3,{2,3}},{4,{2,1}},{4,{1,3}},{2,{1,2}},{4,{1,1}},{4,{2,3}},{2,{2,2}},{4,{1,2}},{2,{1,1}},{1,{1,3}},{3,{1,2}},{1,{2,2}},{3,{2,1}},{3,{1,3}},{1,{1,2}},{3,{2,2}},{1,{2,1}},{2,{2,3}},{4,{2,2}}};
ans[4][2][4]={{1,{1,1}},{1,{2,3}},{2,{2,1}},{2,{1,3}},{3,{1,1}},{3,{2,3}},{4,{2,1}},{4,{1,3}},{2,{1,2}},{2,{2,4}},{1,{2,2}},{1,{1,4}},{3,{1,3}},{3,{2,1}},{2,{2,3}},{2,{1,1}},{1,{1,3}},{1,{2,1}},{3,{2,2}},{4,{2,4}},{4,{1,2}},{3,{1,4}},{1,{2,4}},{1,{1,2}},{2,{1,4}},{3,{1,2}},{4,{1,4}},{4,{2,2}},{3,{2,4}},{2,{2,2}},{4,{2,3}},{4,{1,1}}};
ans[4][2][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{2,{1,3}},{2,{2,1}},{3,{2,3}},{3,{1,1}},{4,{1,3}},{4,{2,1}},{2,{1,1}},{2,{2,3}},{2,{1,5}},{4,{2,5}},{2,{2,4}},{2,{1,2}},{1,{1,4}},{3,{1,5}},{1,{2,5}},{1,{1,3}},{1,{2,1}},{3,{2,2}},{3,{1,4}},{4,{1,2}},{4,{2,4}},{2,{2,5}},{4,{1,5}},{4,{2,3}},{4,{1,1}},{3,{1,3}},{3,{2,1}},{1,{2,2}},{3,{1,2}},{4,{1,4}},{4,{2,2}},{3,{2,4}},{2,{2,2}},{2,{1,4}},{1,{1,2}},{1,{2,4}},{3,{2,5}}};
ans[4][3][1]={{1,{1,1}},{3,{2,1}},{1,{3,1}},{2,{1,1}},{4,{2,1}},{2,{3,1}},{3,{1,1}},{1,{2,1}},{3,{3,1}},{4,{1,1}},{2,{2,1}},{4,{3,1}}};
ans[4][3][2]={{1,{1,1}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{3,{1,1}},{3,{3,2}},{4,{1,2}},{4,{3,1}},{2,{2,1}},{4,{1,1}},{4,{3,2}},{2,{2,2}},{4,{2,1}},{2,{1,1}},{1,{3,1}},{3,{2,1}},{1,{2,2}},{3,{1,2}},{3,{3,1}},{1,{2,1}},{3,{2,2}},{1,{1,2}},{2,{3,2}},{4,{2,2}}};
ans[4][3][3]={{1,{1,1}},{2,{1,3}},{3,{1,1}},{4,{1,3}},{2,{1,2}},{4,{1,1}},{3,{1,3}},{2,{1,1}},{1,{1,3}},{3,{1,2}},{1,{2,2}},{3,{2,1}},{2,{2,3}},{1,{2,1}},{3,{2,2}},{1,{2,3}},{2,{2,1}},{3,{2,3}},{4,{2,1}},{2,{2,2}},{4,{2,3}},{4,{3,1}},{3,{3,3}},{1,{3,2}},{3,{3,1}},{2,{3,3}},{4,{3,2}},{2,{3,1}},{1,{3,3}},{1,{1,2}},{1,{3,1}},{3,{3,2}},{4,{1,2}},{4,{3,3}},{2,{3,2}},{4,{2,2}}};
ans[4][3][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{2,4}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{1,4}},{1,{2,2}},{1,{3,4}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{1,2}},{3,{2,4}},{3,{3,2}},{3,{1,1}},{3,{2,3}},{3,{3,1}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{3,{3,4}},{3,{2,2}},{3,{1,4}},{4,{3,4}},{4,{2,2}},{4,{1,4}},{4,{3,3}},{4,{2,1}},{4,{1,3}},{4,{3,2}},{4,{2,4}},{4,{1,2}},{4,{3,1}},{4,{2,3}},{4,{1,1}}};
ans[4][3][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{3,{3,3}},{3,{2,1}},{3,{1,3}},{3,{2,5}},{4,{2,3}},{4,{1,1}},{4,{3,2}},{4,{2,4}},{4,{1,2}},{4,{3,1}},{3,{1,1}},{3,{2,3}},{3,{1,5}},{3,{3,4}},{3,{2,2}},{3,{1,4}},{3,{3,5}},{2,{3,3}},{1,{3,5}},{2,{1,5}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{2,{3,5}},{4,{2,5}},{4,{1,3}},{4,{2,1}},{4,{3,3}},{4,{1,4}},{4,{3,5}},{2,{2,5}},{2,{1,3}},{2,{2,1}},{4,{2,2}},{3,{2,4}},{3,{1,2}},{3,{3,1}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{3,{3,2}},{4,{3,4}},{4,{1,5}}};
ans[4][4][2]={{1,{1,1}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{3,{1,1}},{3,{3,2}},{4,{1,2}},{4,{3,1}},{2,{2,1}},{2,{4,2}},{1,{2,2}},{1,{4,1}},{3,{3,1}},{3,{1,2}},{2,{3,2}},{2,{1,1}},{1,{3,1}},{1,{1,2}},{3,{2,2}},{4,{4,2}},{4,{2,1}},{3,{4,1}},{1,{4,2}},{1,{2,1}},{2,{4,1}},{3,{2,1}},{4,{4,1}},{4,{2,2}},{3,{4,2}},{2,{2,2}},{4,{3,2}},{4,{1,1}}};
ans[4][4][3]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{4,1}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{1,3}},{2,{2,1}},{2,{3,3}},{2,{4,1}},{2,{2,2}},{2,{4,3}},{3,{4,1}},{3,{3,3}},{3,{2,1}},{3,{1,3}},{3,{3,2}},{1,{4,2}},{3,{4,3}},{3,{3,1}},{3,{2,3}},{3,{4,2}},{4,{2,2}},{4,{4,1}},{4,{3,3}},{4,{1,2}},{4,{3,1}},{4,{4,3}},{2,{4,2}},{3,{2,2}},{1,{1,2}},{3,{1,1}},{4,{1,3}},{4,{2,1}},{4,{4,2}},{4,{2,3}},{4,{1,1}},{4,{3,2}},{3,{1,2}}};
ans[4][4][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{2,{1,4}},{2,{2,2}},{2,{3,4}},{2,{4,2}},{2,{2,1}},{2,{1,3}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{4,1}},{3,{2,2}},{3,{1,4}},{4,{1,2}},{4,{2,4}},{4,{3,2}},{4,{4,4}},{4,{2,3}},{4,{1,1}},{3,{3,1}},{3,{2,3}},{3,{1,1}},{3,{3,2}},{3,{2,4}},{3,{1,2}},{4,{1,4}},{4,{2,2}},{4,{3,4}},{4,{1,3}},{4,{2,1}},{4,{3,3}},{4,{4,1}},{3,{4,3}},{1,{4,4}},{3,{3,4}},{3,{4,2}},{1,{4,1}},{2,{4,3}},{4,{4,2}},{3,{4,4}},{1,{3,4}},{1,{4,2}},{2,{4,4}},{4,{4,3}},{4,{3,1}},{2,{4,1}},{2,{3,3}}};
ans[4][4][5]={{1,{1,1}},{2,{3,1}},{3,{1,1}},{4,{3,1}},{2,{2,1}},{1,{4,1}},{3,{3,1}},{2,{1,1}},{1,{3,1}},{3,{2,1}},{2,{4,1}},{1,{2,1}},{1,{4,2}},{2,{2,2}},{3,{4,2}},{4,{2,2}},{2,{1,2}},{1,{3,2}},{3,{2,2}},{2,{4,2}},{1,{2,2}},{3,{1,2}},{2,{3,2}},{1,{1,2}},{1,{3,3}},{2,{1,3}},{3,{3,3}},{4,{1,3}},{2,{2,3}},{1,{4,3}},{1,{2,4}},{2,{4,4}},{3,{2,4}},{4,{4,4}},{2,{3,4}},{1,{1,4}},{1,{3,5}},{2,{1,5}},{3,{3,5}},{4,{1,5}},{2,{2,5}},{1,{4,5}},{3,{4,4}},{2,{2,4}},{1,{4,4}},{3,{3,4}},{2,{1,4}},{1,{3,4}},{1,{1,3}},{2,{3,3}},{3,{1,3}},{1,{2,3}},{2,{4,3}},{3,{2,3}},{4,{4,3}},{3,{4,1}},{4,{2,1}},{4,{4,2}},{4,{2,3}},{4,{1,1}},{4,{3,2}},{4,{2,4}},{4,{4,5}},{3,{4,3}},{4,{4,1}},{4,{3,3}},{4,{1,4}},{4,{3,5}},{3,{1,5}},{1,{2,5}},{2,{4,5}},{3,{2,5}},{1,{1,5}},{3,{1,4}},{4,{1,2}},{3,{3,2}},{4,{3,4}},{2,{3,5}},{4,{2,5}},{3,{4,5}}};
ans[4][5][1]={{1,{1,1}},{2,{3,1}},{1,{5,1}},{3,{4,1}},{4,{2,1}},{2,{1,1}},{1,{3,1}},{2,{5,1}},{4,{4,1}},{3,{2,1}},{2,{4,1}},{1,{2,1}},{3,{1,1}},{4,{3,1}},{3,{5,1}},{1,{4,1}},{2,{2,1}},{4,{1,1}},{3,{3,1}},{4,{5,1}}};
ans[4][5][2]={{1,{1,1}},{1,{3,2}},{1,{5,1}},{2,{3,1}},{2,{1,2}},{3,{3,2}},{3,{1,1}},{4,{3,1}},{4,{1,2}},{2,{1,1}},{2,{3,2}},{2,{5,1}},{4,{5,2}},{2,{4,2}},{2,{2,1}},{1,{4,1}},{3,{5,1}},{1,{5,2}},{1,{3,1}},{1,{1,2}},{3,{2,2}},{3,{4,1}},{4,{2,1}},{4,{4,2}},{2,{5,2}},{4,{5,1}},{4,{3,2}},{4,{1,1}},{3,{3,1}},{3,{1,2}},{1,{2,2}},{3,{2,1}},{4,{4,1}},{4,{2,2}},{3,{4,2}},{2,{2,2}},{2,{4,1}},{1,{2,1}},{1,{4,2}},{3,{5,2}}};
ans[4][5][3]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{5,1}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{4,1}},{1,{5,3}},{2,{5,1}},{2,{4,3}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{1,3}},{2,{2,1}},{2,{3,3}},{2,{4,1}},{2,{5,3}},{3,{5,1}},{3,{4,3}},{3,{3,1}},{3,{2,3}},{3,{1,1}},{3,{3,2}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{4,1}},{3,{5,3}},{1,{5,2}},{3,{4,2}},{4,{2,2}},{4,{4,1}},{4,{5,3}},{2,{5,2}},{4,{5,1}},{4,{4,3}},{4,{3,1}},{4,{1,2}},{4,{3,3}},{4,{5,2}},{2,{4,2}},{1,{2,2}},{3,{1,2}},{4,{3,2}},{3,{5,2}},{1,{4,2}},{2,{2,2}},{4,{2,1}},{4,{1,3}},{2,{1,2}},{4,{1,1}},{4,{2,3}},{4,{4,2}},{3,{2,2}},{1,{1,2}}};
ans[4][5][4]={{1,{1,1}},{2,{1,3}},{3,{1,1}},{4,{1,3}},{2,{1,2}},{1,{1,4}},{3,{1,3}},{2,{1,1}},{1,{1,3}},{3,{1,2}},{2,{1,4}},{1,{1,2}},{1,{2,4}},{2,{2,2}},{3,{2,4}},{4,{2,2}},{2,{2,1}},{1,{2,3}},{3,{2,2}},{2,{2,4}},{1,{2,2}},{3,{2,1}},{2,{2,3}},{1,{2,1}},{1,{3,3}},{2,{3,1}},{3,{3,3}},{4,{3,1}},{2,{3,2}},{1,{3,4}},{1,{4,2}},{2,{4,4}},{3,{4,2}},{4,{4,4}},{2,{4,3}},{1,{4,1}},{1,{5,3}},{2,{5,1}},{3,{5,3}},{4,{5,1}},{2,{5,2}},{1,{5,4}},{3,{4,4}},{2,{4,2}},{1,{4,4}},{3,{4,3}},{2,{4,1}},{1,{4,3}},{1,{3,1}},{2,{3,3}},{3,{3,1}},{1,{3,2}},{2,{3,4}},{3,{3,2}},{4,{3,4}},{3,{1,4}},{4,{1,2}},{4,{2,4}},{4,{3,2}},{4,{1,1}},{4,{2,3}},{4,{4,2}},{4,{5,4}},{3,{3,4}},{4,{1,4}},{4,{3,3}},{4,{4,1}},{4,{5,3}},{3,{5,1}},{1,{5,2}},{2,{5,4}},{3,{5,2}},{1,{5,1}},{3,{4,1}},{4,{2,1}},{3,{2,3}},{4,{4,3}},{2,{5,3}},{4,{5,2}},{3,{5,4}}};
ans[4][5][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{1,{4,4}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}},{1,{4,3}},{1,{3,5}},{1,{5,4}},{1,{4,2}},{2,{4,4}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{2,5}},{3,{4,4}},{3,{3,2}},{3,{2,4}},{3,{1,2}},{3,{3,1}},{3,{2,3}},{3,{1,1}},{2,{1,3}},{2,{2,1}},{2,{3,3}},{2,{2,5}},{1,{4,5}},{1,{5,3}},{1,{4,1}},{2,{4,3}},{2,{3,5}},{2,{1,4}},{2,{2,2}},{2,{3,4}},{2,{4,2}},{2,{5,4}},{1,{5,2}},{3,{5,1}},{3,{4,3}},{3,{3,5}},{3,{1,4}},{3,{2,2}},{3,{3,4}},{3,{4,2}},{3,{5,4}},{2,{5,2}},{4,{5,1}},{4,{4,3}},{4,{3,1}},{4,{2,3}},{4,{1,1}},{4,{3,2}},{4,{2,4}},{4,{1,2}},{4,{3,3}},{4,{2,1}},{4,{1,3}},{3,{1,5}},{4,{3,5}},{3,{5,5}},{4,{5,3}},{4,{4,5}},{2,{5,5}},{3,{5,3}},{3,{4,1}},{1,{5,1}},{3,{5,2}},{4,{5,4}},{4,{4,2}},{2,{4,1}},{2,{5,3}},{1,{5,5}},{3,{4,5}},{4,{2,5}},{2,{1,5}},{4,{1,4}},{4,{2,2}},{4,{4,1}},{2,{5,1}},{4,{5,2}},{4,{4,4}},{2,{4,5}},{4,{5,5}},{4,{3,4}},{4,{1,5}}};
ans[5][1][4]={{1,{1,1}},{2,{1,3}},{3,{1,1}},{1,{1,2}},{2,{1,4}},{4,{1,3}},{5,{1,1}},{3,{1,2}},{4,{1,4}},{5,{1,2}},{3,{1,3}},{1,{1,4}},{2,{1,2}},{4,{1,1}},{5,{1,3}},{3,{1,4}},{1,{1,3}},{2,{1,1}},{4,{1,2}},{5,{1,4}}};
ans[5][1][5]={{1,{1,1}},{2,{1,3}},{1,{1,5}},{3,{1,4}},{2,{1,2}},{1,{1,4}},{3,{1,5}},{5,{1,4}},{4,{1,2}},{2,{1,1}},{1,{1,3}},{2,{1,5}},{3,{1,3}},{4,{1,1}},{5,{1,3}},{4,{1,5}},{2,{1,4}},{1,{1,2}},{3,{1,1}},{5,{1,2}},{4,{1,4}},{3,{1,2}},{5,{1,1}},{4,{1,3}},{5,{1,5}}};
ans[5][2][3]={{1,{1,1}},{1,{2,3}},{2,{2,1}},{2,{1,3}},{3,{1,1}},{3,{2,3}},{1,{2,2}},{3,{1,2}},{5,{2,2}},{3,{2,1}},{4,{2,3}},{5,{2,1}},{5,{1,3}},{4,{1,1}},{2,{1,2}},{4,{2,2}},{2,{2,3}},{1,{2,1}},{1,{1,3}},{2,{1,1}},{4,{1,2}},{2,{2,2}},{4,{2,1}},{4,{1,3}},{5,{1,1}},{5,{2,3}},{3,{1,3}},{1,{1,2}},{3,{2,2}},{5,{1,2}}};
ans[5][2][4]={{1,{1,1}},{1,{2,3}},{2,{2,1}},{2,{1,3}},{3,{1,1}},{3,{2,3}},{4,{2,1}},{4,{1,3}},{5,{1,1}},{5,{2,3}},{3,{1,3}},{3,{2,1}},{2,{2,3}},{2,{1,1}},{1,{1,3}},{1,{2,1}},{3,{2,2}},{3,{1,4}},{2,{1,2}},{2,{2,4}},{1,{2,2}},{1,{1,4}},{3,{2,4}},{4,{2,2}},{5,{2,4}},{5,{1,2}},{4,{1,4}},{3,{1,2}},{5,{2,2}},{5,{1,4}},{4,{1,2}},{4,{2,4}},{2,{1,4}},{1,{1,2}},{1,{2,4}},{2,{2,2}},{4,{2,3}},{4,{1,1}},{5,{1,3}},{5,{2,1}}};
ans[5][3][2]={{1,{1,1}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{3,{1,1}},{3,{3,2}},{1,{2,2}},{3,{1,2}},{5,{2,2}},{3,{2,1}},{1,{3,1}},{1,{1,2}},{2,{3,2}},{4,{2,2}},{2,{2,1}},{4,{1,1}},{5,{3,1}},{5,{1,2}},{4,{3,2}},{2,{2,2}},{4,{2,1}},{2,{1,1}},{4,{1,2}},{4,{3,1}},{5,{1,1}},{5,{3,2}},{3,{2,2}},{1,{2,1}},{3,{3,1}},{5,{2,1}}};
ans[5][3][3]={{1,{1,1}},{2,{1,3}},{3,{1,1}},{4,{1,3}},{5,{1,1}},{3,{1,2}},{1,{1,3}},{2,{1,1}},{3,{1,3}},{4,{1,1}},{5,{1,3}},{5,{2,1}},{4,{2,3}},{3,{2,1}},{2,{2,3}},{1,{2,1}},{3,{2,2}},{1,{2,3}},{2,{2,1}},{4,{2,2}},{2,{1,2}},{2,{3,1}},{1,{3,3}},{1,{1,2}},{1,{3,1}},{2,{3,3}},{3,{3,1}},{1,{3,2}},{3,{3,3}},{5,{3,2}},{4,{1,2}},{2,{2,2}},{4,{3,2}},{5,{1,2}},{5,{3,1}},{5,{2,3}},{4,{2,1}},{4,{3,3}},{2,{3,2}},{4,{3,1}},{5,{3,3}},{3,{3,2}},{1,{2,2}},{3,{2,3}},{5,{2,2}}};
ans[5][3][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{2,4}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{3,3}},{1,{1,4}},{1,{2,2}},{1,{3,4}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{1,2}},{3,{2,4}},{3,{3,2}},{3,{1,1}},{3,{2,3}},{3,{3,1}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{3,{3,4}},{3,{2,2}},{3,{1,4}},{4,{1,2}},{4,{2,4}},{4,{3,2}},{4,{1,1}},{4,{2,3}},{4,{3,1}},{5,{3,3}},{5,{2,1}},{5,{1,3}},{5,{3,2}},{5,{2,4}},{5,{1,2}},{5,{3,1}},{5,{2,3}},{5,{1,1}},{4,{1,3}},{4,{2,1}},{4,{3,3}},{4,{1,4}},{4,{2,2}},{4,{3,4}},{5,{1,4}},{5,{2,2}},{5,{3,4}}};
ans[5][3][5]={{1,{1,1}},{1,{2,3}},{1,{1,5}},{1,{3,4}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{2,5}},{2,{2,3}},{2,{1,1}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{3,{3,3}},{3,{2,1}},{3,{1,3}},{3,{2,5}},{4,{2,3}},{4,{1,1}},{4,{3,2}},{4,{2,4}},{4,{1,2}},{4,{3,1}},{5,{3,3}},{5,{2,1}},{5,{1,3}},{5,{2,5}},{3,{2,4}},{3,{1,2}},{3,{3,1}},{3,{2,3}},{3,{1,1}},{3,{3,2}},{2,{3,4}},{2,{2,2}},{2,{1,4}},{2,{3,3}},{2,{2,1}},{2,{1,3}},{2,{2,5}},{4,{1,5}},{4,{3,4}},{4,{2,2}},{4,{1,4}},{4,{3,3}},{4,{2,1}},{4,{1,3}},{4,{2,5}},{2,{3,5}},{3,{1,5}},{4,{3,5}},{5,{1,5}},{5,{3,4}},{5,{2,2}},{5,{1,4}},{5,{3,5}},{3,{3,4}},{1,{3,5}},{2,{1,5}},{3,{3,5}},{3,{1,4}},{5,{2,4}},{5,{1,2}},{5,{3,1}},{5,{2,3}},{5,{1,1}},{5,{3,2}},{3,{2,2}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{1,{3,1}}};
ans[5][4][1]={{1,{1,1}},{2,{3,1}},{3,{1,1}},{1,{2,1}},{2,{4,1}},{4,{3,1}},{5,{1,1}},{3,{2,1}},{4,{4,1}},{5,{2,1}},{3,{3,1}},{1,{4,1}},{2,{2,1}},{4,{1,1}},{5,{3,1}},{3,{4,1}},{1,{3,1}},{2,{1,1}},{4,{2,1}},{5,{4,1}}};
ans[5][4][2]={{1,{1,1}},{1,{3,2}},{2,{1,2}},{2,{3,1}},{3,{1,1}},{3,{3,2}},{4,{1,2}},{4,{3,1}},{5,{1,1}},{5,{3,2}},{3,{2,2}},{3,{4,1}},{2,{2,1}},{2,{4,2}},{1,{2,2}},{1,{4,1}},{3,{3,1}},{3,{1,2}},{2,{3,2}},{1,{1,2}},{1,{3,1}},{2,{1,1}},{4,{2,1}},{4,{4,2}},{5,{2,2}},{5,{4,1}},{3,{4,2}},{4,{2,2}},{5,{4,2}},{5,{2,1}},{4,{4,1}},{3,{2,1}},{2,{4,1}},{1,{2,1}},{1,{4,2}},{2,{2,2}},{4,{3,2}},{4,{1,1}},{5,{3,1}},{5,{1,2}}};
ans[5][4][3]={{1,{1,1}},{1,{3,2}},{1,{1,3}},{1,{2,1}},{1,{4,2}},{1,{2,3}},{1,{3,1}},{1,{1,2}},{1,{3,3}},{1,{4,1}},{1,{2,2}},{1,{4,3}},{2,{2,3}},{2,{4,2}},{2,{2,1}},{2,{1,3}},{2,{3,2}},{2,{1,1}},{3,{3,1}},{3,{1,2}},{3,{3,3}},{3,{2,1}},{3,{4,2}},{3,{2,3}},{3,{1,1}},{3,{3,2}},{3,{1,3}},{2,{3,3}},{2,{1,2}},{2,{3,1}},{2,{4,3}},{2,{2,2}},{2,{4,1}},{3,{4,3}},{3,{2,2}},{3,{4,1}},{4,{2,1}},{4,{4,2}},{4,{2,3}},{4,{1,1}},{4,{3,2}},{4,{1,3}},{5,{3,3}},{5,{1,2}},{5,{3,1}},{5,{2,3}},{5,{4,2}},{5,{2,1}},{5,{1,3}},{5,{3,2}},{5,{1,1}},{4,{3,1}},{4,{1,2}},{4,{3,3}},{4,{4,1}},{4,{2,2}},{4,{4,3}},{5,{4,1}},{5,{2,2}},{5,{4,3}}};
ans[5][4][4]={{1,{1,1}},{1,{2,3}},{1,{3,1}},{1,{4,3}},{1,{2,2}},{1,{1,4}},{1,{3,3}},{1,{2,1}},{1,{1,3}},{1,{3,2}},{1,{2,4}},{1,{1,2}},{2,{1,4}},{2,{2,2}},{2,{3,4}},{2,{4,2}},{2,{2,1}},{2,{1,3}},{2,{3,2}},{2,{2,4}},{2,{1,2}},{2,{3,1}},{2,{2,3}},{2,{1,1}},{3,{1,3}},{3,{2,1}},{3,{3,3}},{3,{4,1}},{3,{2,2}},{3,{1,4}},{4,{1,2}},{4,{2,4}},{4,{3,2}},{4,{4,4}},{4,{2,3}},{4,{1,1}},{5,{1,3}},{5,{2,1}},{5,{3,3}},{5,{4,1}},{5,{2,2}},{5,{1,4}},{4,{3,4}},{4,{2,2}},{4,{1,4}},{4,{3,3}},{4,{2,1}},{4,{1,3}},{3,{1,1}},{3,{2,3}},{3,{3,1}},{3,{1,2}},{3,{2,4}},{3,{3,2}},{3,{4,4}},{1,{3,4}},{1,{4,2}},{2,{4,4}},{3,{4,2}},{1,{4,1}},{2,{4,3}},{4,{4,2}},{5,{4,4}},{3,{3,4}},{1,{4,4}},{3,{4,3}},{4,{4,1}},{5,{4,3}},{5,{3,1}},{5,{1,2}},{5,{2,4}},{5,{3,2}},{5,{1,1}},{4,{3,1}},{2,{4,1}},{2,{3,3}},{4,{4,3}},{5,{2,3}},{5,{4,2}},{5,{3,4}}};
ans[5][4][5]={{1,{1,1}},{2,{1,3}},{1,{1,5}},{3,{1,4}},{2,{1,2}},{1,{1,4}},{3,{1,3}},{2,{1,1}},{1,{1,3}},{2,{1,5}},{4,{1,4}},{3,{1,2}},{2,{1,4}},{1,{1,2}},{3,{1,1}},{4,{1,3}},{3,{1,5}},{5,{1,4}},{4,{1,2}},{4,{2,4}},{3,{2,2}},{2,{2,4}},{1,{2,2}},{3,{2,1}},{2,{2,3}},{1,{2,1}},{1,{3,3}},{2,{3,1}},{3,{3,3}},{2,{3,5}},{4,{3,4}},{3,{3,2}},{2,{3,4}},{1,{3,2}},{3,{3,1}},{2,{3,3}},{1,{3,1}},{1,{2,3}},{2,{2,1}},{3,{2,3}},{2,{2,5}},{4,{1,5}},{5,{1,3}},{4,{1,1}},{4,{2,3}},{3,{2,5}},{1,{2,4}},{2,{2,2}},{3,{2,4}},{4,{2,2}},{5,{2,4}},{5,{1,2}},{5,{3,1}},{4,{3,3}},{3,{3,5}},{1,{3,4}},{2,{3,2}},{3,{3,4}},{4,{3,2}},{5,{3,4}},{5,{2,2}},{5,{4,1}},{4,{4,3}},{3,{4,1}},{2,{4,3}},{1,{4,1}},{3,{4,2}},{2,{4,4}},{1,{4,2}},{3,{4,3}},{2,{4,1}},{1,{4,3}},{1,{3,5}},{3,{4,5}},{5,{3,5}},{5,{4,3}},{4,{4,5}},{5,{2,5}},{5,{3,3}},{4,{3,1}},{5,{1,1}},{5,{3,2}},{5,{4,4}},{4,{4,2}},{4,{2,1}},{5,{2,3}},{5,{1,5}},{4,{3,5}},{2,{4,5}},{1,{2,5}},{1,{4,4}},{2,{4,2}},{4,{4,1}},{5,{2,1}},{5,{4,2}},{4,{4,4}},{4,{2,5}},{5,{4,5}},{3,{4,4}},{1,{4,5}}};
ans[5][5][1]={{1,{1,1}},{2,{3,1}},{1,{5,1}},{3,{4,1}},{2,{2,1}},{1,{4,1}},{3,{5,1}},{5,{4,1}},{4,{2,1}},{2,{1,1}},{1,{3,1}},{2,{5,1}},{3,{3,1}},{4,{1,1}},{5,{3,1}},{4,{5,1}},{2,{4,1}},{1,{2,1}},{3,{1,1}},{5,{2,1}},{4,{4,1}},{3,{2,1}},{5,{1,1}},{4,{3,1}},{5,{5,1}}};
ans[5][5][3]={{1,{1,1}},{1,{3,2}},{1,{5,1}},{1,{4,3}},{1,{2,2}},{1,{4,1}},{1,{3,3}},{1,{1,2}},{1,{3,1}},{1,{5,2}},{2,{3,2}},{2,{1,1}},{2,{2,3}},{2,{4,2}},{2,{2,1}},{2,{1,3}},{3,{3,3}},{3,{1,2}},{3,{3,1}},{3,{5,2}},{4,{3,2}},{4,{1,1}},{4,{2,3}},{4,{4,2}},{4,{2,1}},{4,{1,3}},{5,{3,3}},{5,{1,2}},{5,{3,1}},{5,{5,2}},{3,{4,2}},{3,{2,1}},{3,{1,3}},{3,{3,2}},{3,{1,1}},{3,{2,3}},{2,{4,3}},{2,{2,2}},{2,{4,1}},{2,{3,3}},{2,{1,2}},{2,{3,1}},{2,{5,2}},{4,{5,1}},{4,{4,3}},{4,{2,2}},{4,{4,1}},{4,{3,3}},{4,{1,2}},{4,{3,1}},{4,{5,2}},{2,{5,3}},{3,{5,1}},{4,{5,3}},{5,{5,1}},{5,{4,3}},{5,{2,2}},{5,{4,1}},{5,{5,3}},{3,{4,3}},{1,{5,3}},{2,{5,1}},{3,{5,3}},{3,{4,1}},{5,{4,2}},{5,{2,1}},{5,{1,3}},{5,{3,2}},{5,{1,1}},{5,{2,3}},{3,{2,2}},{1,{2,3}},{1,{4,2}},{1,{2,1}},{1,{1,3}}};
ans[5][5][4]={{1,{1,1}},{2,{3,1}},{1,{5,1}},{3,{4,1}},{2,{2,1}},{1,{4,1}},{3,{3,1}},{2,{1,1}},{1,{3,1}},{2,{5,1}},{4,{4,1}},{3,{2,1}},{2,{4,1}},{1,{2,1}},{3,{1,1}},{4,{3,1}},{3,{5,1}},{5,{4,1}},{4,{2,1}},{4,{4,2}},{3,{2,2}},{2,{4,2}},{1,{2,2}},{3,{1,2}},{2,{3,2}},{1,{1,2}},{1,{3,3}},{2,{1,3}},{3,{3,3}},{2,{5,3}},{4,{4,3}},{3,{2,3}},{2,{4,3}},{1,{2,3}},{3,{1,3}},{2,{3,3}},{1,{1,3}},{1,{3,2}},{2,{1,2}},{3,{3,2}},{2,{5,2}},{4,{5,1}},{5,{3,1}},{4,{1,1}},{4,{3,2}},{3,{5,2}},{1,{4,2}},{2,{2,2}},{3,{4,2}},{4,{2,2}},{5,{4,2}},{5,{2,1}},{5,{1,3}},{4,{3,3}},{3,{5,3}},{1,{4,3}},{2,{2,3}},{3,{4,3}},{4,{2,3}},{5,{4,3}},{5,{2,2}},{5,{1,4}},{4,{3,4}},{3,{1,4}},{2,{3,4}},{1,{1,4}},{3,{2,4}},{2,{4,4}},{1,{2,4}},{3,{3,4}},{2,{1,4}},{1,{3,4}},{1,{5,3}},{3,{5,4}},{5,{5,3}},{5,{3,4}},{4,{5,4}},{5,{5,2}},{5,{3,3}},{4,{1,3}},{5,{1,1}},{5,{2,3}},{5,{4,4}},{4,{2,4}},{4,{1,2}},{5,{3,2}},{5,{5,1}},{4,{5,3}},{2,{5,4}},{1,{5,2}},{1,{4,4}},{2,{2,4}},{4,{1,4}},{5,{1,2}},{5,{2,4}},{4,{4,4}},{4,{5,2}},{5,{5,4}},{3,{4,4}},{1,{5,4}}};
okay[1][1][1] = true;
okay[1][3][4] = true;
okay[1][4][3] = true;
okay[1][4][5] = true;
okay[1][5][4] = true;
okay[1][5][5] = true;
okay[2][3][4] = true;
okay[2][3][5] = true;
okay[2][4][3] = true;
okay[2][4][4] = true;
okay[2][4][5] = true;
okay[2][5][3] = true;
okay[2][5][4] = true;
okay[3][1][4] = true;
okay[3][2][4] = true;
okay[3][2][5] = true;
okay[3][3][4] = true;
okay[3][3][5] = true;
okay[3][4][1] = true;
okay[3][4][2] = true;
okay[3][4][3] = true;
okay[3][4][4] = true;
okay[3][4][5] = true;
okay[3][5][2] = true;
okay[3][5][3] = true;
okay[3][5][4] = true;
okay[3][5][5] = true;
okay[4][1][3] = true;
okay[4][1][5] = true;
okay[4][2][3] = true;
okay[4][2][4] = true;
okay[4][2][5] = true;
okay[4][3][1] = true;
okay[4][3][2] = true;
okay[4][3][3] = true;
okay[4][3][4] = true;
okay[4][3][5] = true;
okay[4][4][2] = true;
okay[4][4][3] = true;
okay[4][4][4] = true;
okay[4][4][5] = true;
okay[4][5][1] = true;
okay[4][5][2] = true;
okay[4][5][3] = true;
okay[4][5][4] = true;
okay[4][5][5] = true;
okay[5][1][4] = true;
okay[5][1][5] = true;
okay[5][2][3] = true;
okay[5][2][4] = true;
okay[5][3][2] = true;
okay[5][3][3] = true;
okay[5][3][4] = true;
okay[5][3][5] = true;
okay[5][4][1] = true;
okay[5][4][2] = true;
okay[5][4][3] = true;
okay[5][4][4] = true;
okay[5][4][5] = true;
okay[5][5][1] = true;
okay[5][5][3] = true;
okay[5][5][4] = true;
okay[5][5][5] = true;
}
int main(){
  freopen( "knight.in" , "r" , stdin );
  freopen( "knight.out" , "w" , stdout );
  build();
  int a , b , c;
  scanf( "%d%d%d" , &a , &b , &c );
  if( okay[ a ][ b ][ c ] ){
    puts( "YES" );
    for( auto p : ans[ a ][ b ][ c ] )
      printf( "%d %d %d\n" , p.first , p.second.first , p.second.second );
  }else puts( "NO" );
}