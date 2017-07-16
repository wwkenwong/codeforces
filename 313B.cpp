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
const int maxn=500000;
const ll mod=1000000007;
int dp[maxn];
char s[maxn];

int main(){
	
	std::ios::sync_with_stdio(false);
	memset(dp,0,sizeof(dp));
	int m;
	
	cin>>s>>m;
	int N=strlen(s);
	for(int i=1;i<N;i++){
		
		dp[i]=dp[i-1];
		if(s[i]==s[i-1]){
			dp[i]+=1;
			
		}
		
	}
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		int out=abs(dp[r-1]-dp[l-1]);
		
		cout<<out<<"\n";
		
		
	}
	return 0;
	
}
