#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
const int maxn=100000;
const int inf=1e9+10;
int n,m,k;
int ans;
bool factory[maxn];
int u[maxn],v[maxn],w[maxn];
int main(){
	std::ios::sync_with_stdio(false);
	memset(factory,0,sizeof(factory));
	cin>>n>>m>>k;
	
	if(k==0){
		cout<<"-1";
		return 0;
	}
	for(int i=0;i<m;i++){
		cin>>u[i]>>v[i]>>w[i];
		
	}
	if(k>0){
		for(int i=0;i<k;i++){
			int a;
			cin>>a;
			factory[a]=1;
		}
	}
	int ans=inf;
	for(int i=0;i<m;i++){
		if(!factory[u[i]]&&factory[v[i]]){
			ans=min(ans,w[i]);
		}
		if(!factory[v[i]]&&factory[u[i]]){
			ans=min(ans,w[i]);
		}
	}
	if(ans==inf){
		cout<<"-1";
		return 0;
	}
	cout<<ans;
	return 0;
}
