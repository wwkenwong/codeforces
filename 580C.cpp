#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
const int maxn=200000;
int cat[maxn];//cat number
vector< int > e[maxn];
int m,n,ans;
void dfs(int parent,int son,int num_cat){
	for(int i=0;i<e[son].size();i++){
		// edge from parent
		int v=e[son][i];
		
		if(v==parent){
			continue;
		}
		if(cat[v]==0){
			//stored the parent only
			if(e[v].size()==1){
				ans++;
			}
			dfs(son,v,0);
		}
		else if(num_cat+1<=m){
			if(e[v].size()==1){
				ans++;
			}
			dfs(son,v,(num_cat+cat[v]));
		}
	}
}
int main(){
	std::ios::sync_with_stdio(false);
	ans=0;
	memset(cat,0,sizeof(cat));
	cin>>n>>m;	
	for(int i=1;i<n+1;i++){		
		cin>>cat[i];
	}
	for(int i=0;i<n-1;i++){
		int k,a;
		cin>>k>>a;
		e[k].push_back(a);
		e[a].push_back(k);
	}
	dfs(-1,1,cat[1]);
	cout<<ans;
	return 0;
}

