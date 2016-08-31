#include<iostream>
#include<cstring>
#include <cstdio>  
#include <algorithm>
using namespace std;
const int maxn=2002;
int ans,n;
int nex[maxn],all;
bool is[maxn];
struct node{
	int parent,v,next;
}e[maxn];

void insert(int u,int v)  
{  
    e[all].parent=u;  
    e[all].v=v;  
    e[all].next=nex[u];  
    nex[u]=all++;  
}  
void dfs(int u,int lev)  
{  
    if(ans<lev)ans=lev;  
    for(int x=nex[u];x!=-1;x=e[x].next)  
    dfs(e[x].v,lev+1);  
}  
int main(){
	std::ios::sync_with_stdio(false);
	memset(nex,-1,sizeof(nex));
	memset(is,0,sizeof(is));
	cin>>n;
	for(int i=1;i<n+1;i++){
		int p;
		cin>>p;
		if(p==-1){
			is[i]=1;
		}else{
			insert(p,i);
		}
	}
	if(no==n){
		cout<<"1";
		return 0;
	}
	for(int i=1;i<n+1;i++){
		if(is[i]){
			dfs(i,1);
		}
	}
	cout<<ans;
	return 0;
}
