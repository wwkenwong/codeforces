#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>  
using namespace std;
int main(){
	int n;
	cin>>n;
	int size[4];
	size[0]=0;
	for(int i=1;i<4;i++){
		cin>>size[i];
		if(size[i]==1){
			cout<<n;
			return 0;
		}
	}
	int bingo=0;
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	int maxm=0;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<4;j++){
			if(i>=size[j]){
				if(dp[i-size[j]]!=0||i==size[j]){
					dp[i]=max(dp[i],dp[i-size[j]]+1);
				}
			
				}
			}
		}
		
	
	cout<<dp[n];
	return 0;
}
