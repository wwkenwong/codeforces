#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
const int maxn=105;
int t,s,x;
bool solve(int t,int s,int x){
	if(x==t||(x-t)>0&&(x-t)%s==0||(x-t-1)>0&&(x-t-1)%s==0){
		return 1;
	}
	return 0;
}
int main(){
	std::ios::sync_with_stdio(false);
	cin>>t>>s>>x;
	if(solve(t,s,x)){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
