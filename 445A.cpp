#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <sstream>
#include <deque>
using namespace std;
const int maxn=110;
const int inf=1e9+10;
int n,m;
bool bad[maxn][maxn];
bool vis[maxn][maxn];
bool graph[maxn][maxn];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool valid(int x,int y){
	if(x<0||y<0||x>n||y>m){
		return 0;
	}
	return 1;
}
// bool val=1 for b,0 for w
void dfs(int x,int y,bool val){
	vis[x][y]=1;
	graph[x][y]=val;
	for(int i=0;i<4;i++){
		if(valid(x+dx[i],y+dy[i])){
			if(!bad[x+dx[i]][y+dy[i]]&&!vis[x+dx[i]][y+dy[i]]){
				dfs(x+dx[i],y+dy[i],1-val);
		}
		}
		
		
	}
}
int main(){
	std::ios::sync_with_stdio(false);
	memset(bad,0,sizeof(bad));
	memset(graph,0,sizeof(graph));
	memset(vis,0,sizeof(vis));
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char a;
			cin>>a;
			if(a=='-'){
				bad[i][j]=1;
				vis[i][j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!bad[i][j]&&!vis[i][j]){
				dfs(i,j,1);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(bad[i][j]){
				cout<<"-";
			}else{
				if(graph[i][j]){
					cout<<"B";
				}else{
					cout<<"W";
				}
			}
			
		}
		cout<<"\n";
	}
	return 0;
}
