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
const int maxn=2600;
const int inf=1e9+10;

int dp[maxn][maxn];
pair<int ,int > last[maxn][maxn];
int n;
char s[100000];
int char_counter[30];

vector <char > v;


int main(){
	std::ios::sync_with_stdio(false);
	memset(char_counter,0,sizeof(char_counter));
	cin>>s;
	n=strlen(s);
	if(n>=2600){
		for(int i=0;i<n;i++){
			char_counter[s[i]-'a']++;
			if(char_counter[s[i]-'a']>=100){
				for(int j=0;j<100;j++){
					cout<<s[i];
				}
				return 0;
			}
		}
	}else{
		for(int i=0;i<n;i++){
			dp[i][i]=1;
			
		}
		for(int L=2;L<=n;L++){
			for(int i=0;i+L-1<n;i++){
				if(s[i]==s[i+L-1]){
					dp[i][i+L-1]=dp[i+1][i+L-2]+2;
					last[i][i+L-1]=make_pair(i+1,i+L-2);
				}else{
					if(dp[i+1][i+L-1]>dp[i][i+L-2]){
						dp[i][i+L-1]=dp[i+1][i+L-1];
						last[i][i+L-1]=make_pair(i+1,i+L-1);
					}else{
						dp[i][i+L-1]=dp[i][i+L-2];
						last[i][i+L-1]=make_pair(i,i+L-2);
					}
				}
			}
		}
		int L=0,R=n-1;
		bool even=0;
		while(L<R){
			if(s[L]==s[R]){
				v.push_back(s[L]);
				if(L+1==R){
					even=1;
					break;
				}
			}
			int t=last[L][R].first;
			R=last[L][R].second;
			L=t;
			
		}
		for(unsigned int i=0;i<min(v.size(),50u);i++){
			cout<<v[i];
		}
		if(!even&& v.size()<50){
			cout<<s[L];
		}
		for(int i=min((int)v.size()-1,49);i>=0;i--){
			cout<<v[i];
		}
		return 0;
		
	}
}
