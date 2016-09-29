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
#define ll long long
using namespace std;
const int maxn=200000;
const int inf=1e9+10;

const int MOD=2520;
int a[100];
int dp[100];
int n;
int main(){
	std::ios::sync_with_stdio(false);
	memset(a,0,sizeof(a));
	memset(dp,0,sizeof(dp));
	cin>>n;
	if(n==1){
		int p;
		cin>>p;
		if(p==15){
			cout<<"DOWN\n";
			return 0;
		}
		if(p==0){
			cout<<"UP";
			return 0;
		}
		cout<<"-1\n";
		return 0;
	}
	else{
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		for(int i=0;i<n-1;i++){
			dp[i]=a[i+1]-a[i];
		}
		if(a[n-1]==15){
			cout<<"DOWN\n";
			return 0;
		}
		if(a[n-1]==0){
			cout<<"UP";
			return 0;
		}
		if(dp[n-2]==-1){
			cout<<"DOWN\n";
			
		}else{
			cout<<"UP";
		}
		
	}
	return 0;
}
