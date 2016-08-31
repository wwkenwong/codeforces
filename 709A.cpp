#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
const int maxn=200000;
//int o[maxn];
int n,b,d,garbage,ans;
bool juice_flag;
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>b>>d;
	garbage=0;
	ans=0;
	bool throw_=0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(k>b){
			throw_=1;
		}else{
			if(garbage>d){
				garbage=0;
				garbage+=k;
				ans++;
			}else{
				if(garbage+k>d){
					garbage=0;
					ans++;
				}else{
					garbage+=k;
				}
				
			}
		}
		
	}
	
	cout<<ans;
	return 0;
}
// 5 3 7
// 1 4 5 1 8
