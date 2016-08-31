#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int dx4[4]={1,0,0,-1};
int dy4[4]={0,-1,1,0};
char maze[800][800];
bool visited[800][800];
int sum=0;
int num=0;
int sx,sy;
bool flag=0;
int n,m,k;
bool checker(int x,int y){
	if(x>=0&&x<=n-1&&y>=0&&y<=m-1&&maze[x][y]=='.'&&!visited[x][y]){
		return 1;
	}
	return 0;
}
void dfs(int x,int y){
	visited[x][y]=1;
	maze[x][y]='R';
	if(num>=sum-k){
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+dx4[i];
		int ny=y+dy4[i];
		if(num>=sum-k){
			break;
		}
		if(checker(nx,ny)){
			num++;
			dfs(nx,ny);
		}
	}
}
void print()
{
    for ( int i = 0 ; i < n;  i++) printf("%s\n",maze[i]);
}
int main(){
	cin>>n>>m>>k;
	memset(visited,0,sizeof(visited));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>maze[i][j];
			if(maze[i][j]=='.'){
				
				sum++;
				sx=i;
				sy=j;
			}
		}
	}
	num = 1;
	dfs(sx,sy);
	for ( int i = 0 ; i < n ; i++)
	{
	    for ( int j = 0 ; j < m;  j++)
	    {
		if (maze[i][j]=='.')
		{
		    maze[i][j]='X';
		}
		if (maze[i][j]=='R')
		{
		    maze[i][j]='.';
		}
	    }
	}
	print();
	return 0;
}
