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
const int maxn=105;
const int inf=1e9+10;
string s;
int dp[maxn];
int main(){
	std::ios::sync_with_stdio(false);
	memset(dp,0,sizeof(dp));
	int n;
	cin>>n;
	cin>>s;

	int counter=0;
	int gp=0;
	int b_counter;
	vector< int > output;
	for(int i=0;i<n;i++){
		if(s[i]=='B'){
			counter++;
		}else{
			if(counter!=0){
				output.push_back(counter);
				counter=0;
				gp++;
			}
		}
	}
	if(counter!=0){
		output.push_back(counter);
		counter=0;
		gp++;
	}
	cout<<gp<<"\n";
	for(int i=0;i<output.size();i++){
		cout<<output[i]<<" ";
	}
	return 0;
}
