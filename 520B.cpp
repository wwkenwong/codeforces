#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;
const int maxn=20000;
bool vis[maxn];
struct node{
	int val,step;
	node(int s,int v):step(s),val(v){
	}
};
queue<node> q;
int main(){
	std::ios::sync_with_stdio(false);
	while(cin>>n>>m){
		if(m<=n){
			cout<<n-m<<"\n";
			return 0;
		}
		
		q.push(node(0,n));
		memset(vis,0,sizeof(vis));
		int ans=0;
		while(!q.empty()){
			node cur=q.front();
			q.pop();
            if(cur.val == m){
                cout<<cur.step;
                return 0;
            }
			if(cur.val<=0){
				continue;
			}
			if(vis[cur.val]){
				continue;
			}
			if(cur.val>m){
				q.push(node(cur.step+1, cur.val-1));
				continue;
			}
			vis[cur.val]=1;
			q.push(node(cur.step+1,cur.val*2));
			q.push(node(cur.step+1,cur.val-1));
		}
	}
	
	
	
}
