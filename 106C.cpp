#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>  
using namespace std;
int main(){
	int number_of_bread[110],bread_powder[110],price[110];
	int dp[1100];
	memset(dp,0,sizeof(dp));
	memset(number_of_bread,0,sizeof(number_of_bread));
	memset(bread_powder,0,sizeof(bread_powder));
	memset(price,0,sizeof(price));
	int n,m,c0,d0;
	cin>>n>>m>>c0>>d0;
	number_of_bread[0]=n/c0;
	bread_powder[0]=c0;
	price[0]=d0;
	for(int i=1;i<m+1;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		number_of_bread[i]=a/b;
		bread_powder[i]=c;
		price[i]=d;		
	}
	for(int i=0;i<m+1;i++){
		for(int j=1;j<=number_of_bread[i];j++){
			for(int k=n;k>=bread_powder[i];k--){
				dp[k]=max (dp[k], dp[k-bread_powder[i]]+price[i]);
				
			}
		}
	}
	cout<<dp[n];
	return 0;
}
