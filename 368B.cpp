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
const int maxn=100001;
const int inf=1e9+10;
int n,m;
int a[maxn];
bool appear[maxn];
int ans[maxn];

int main(){
	std::ios::sync_with_stdio(false);
	memset(a,0,sizeof(a));
	memset(appear,0,sizeof(appear));
	memset(ans,0,sizeof(ans));
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		appear[a[i]]=1;
	}
	int sum=0;
	for(int i=n-1;i>=0;i--){
		if(appear[a[i]]){
			sum++;
			appear[a[i]]=0;
		}
		ans[i]=sum;
	}
	for(int i=0;i<m;i++){
		int k;
		cin>>k;
		cout<<ans[k-1]<<"\n";
	}
	return 0;
}
