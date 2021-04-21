#include <iostream>
#include <cstring> //memset
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
//#include<bits/stdc++.h>

//#define INT_MAX 2147483647
//bool compare(int a, int b) {return a>b;}
//memset(dp, -1, sizeof(dp));
//부울은 flag, start/endXY대신에 start만 받고 사이즈 받기 방법

using namespace std;

int n, m, cnt, k;
//상하좌우 순서
int axisX[4]={0,0,-1,1};
int axisY[4]={-1,1,0,0};
int mapp[101][101];
queue<pair<pair<int, int>, int>> q;
/*
int dfs(int y, int x){
    int dy, dx, tmp=0;
    mapp[y][x]=0;
    
    for(int i=0;i<4;i++){
        dy=y+axisY[i];
        dx=x+axisX[i];
        //map 내부인지.
        if(dy>=0&&dy<n&&dx>=0&&dx<m){
            //값이 1이면 방문.
            if(mapp[dy][dx]==1){
                tmp+=dfs(dy,dx);
            }
        }
    }
    return tmp+1;
}
*/


int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(NULL); cout.tie(NULL);
    scanf("%d %d",&n,&m);
    //맵 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d",&mapp[i][j]);
        }
    }
    
    //BFS 시작
    q.push(make_pair(make_pair(0,0),1));
    mapp[0][0]=0;
    while(!q.empty()){
        int y=q.front().first.first;
        int x=q.front().first.second;
        int d=q.front().second;
        q.pop();
        
        if(y==n-1&&x==m-1){
            printf("%d\n",d);
            break;
        }
        
        int dy, dx;
        for(int i=0;i<4;i++){
            dy=y+axisY[i];
            dx=x+axisX[i];
            if(dy>=0&&dy<n&&dx>=0&&dx<m){
                if(mapp[dy][dx]==1){
                    q.push(make_pair(make_pair(dy,dx),d+1));
                    mapp[dy][dx]=0;
                }
            }
        }
        
    }
    
    return 0;
}
