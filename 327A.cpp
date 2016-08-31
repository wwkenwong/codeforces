#include<iostream>
#include<cstring>
using namespace std;
const int maxn=101;
int container[maxn];
int dp[maxn]; 
int main(){
	std::ios::sync_with_stdio(false);
	memset(dp,0,sizeof(dp));
	memset(container,0,sizeof(container));
	int n;
	int sum=0;
	int maxi=-2;
	int count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>container[i];
		count+=container[i];
		if(container[i]==1){
			dp[i]=-1;
		}
		else{
			dp[i]=1;
		}
		
	}
	for(int i=0;i<n;i++){
		sum+=dp[i];
		maxi=max(sum,maxi);
		if(sum<0){
			sum=0;
	}
	}
	cout<<maxi+count;
	
	
	return 0;
}
