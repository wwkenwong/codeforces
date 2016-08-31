#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>  
using namespace std;
int main(){
	int n;
	int sum=0;
	cin>>n;
	int container[n+1];
	int dp[250000];
	memset(container,0,sizeof(container));
	memset(dp,0,sizeof(dp));
	for(int i=1;i<n+1;i++){
		cin>>container[i];
		sum+=container[i];
	}
	if(sum%200!=0){
		cout<<"NO";
		return 0;
	}
	sum/=2;
	for(int i=1;i<n+1;i++){
		for(int j=sum;j>=container[i];j--){
			dp[j]=max(dp[j],dp[j-container[i]]+container[i]);  
		}
	}
	if(dp[sum]==sum){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}  
