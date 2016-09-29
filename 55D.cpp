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

ll dp[21][MOD][50];
int digit[21];
int indx[MOD+5];

void init() {
    int num = 0;
    for(int i = 1; i <= MOD; ++i) {
        if(MOD%i == 0) indx[i] = num++;
    }
    memset(dp, -1,sizeof(dp));
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a/gcd(a, b)*b;
}


ll dfs(int pos, int presum, int prelcm, bool edge) {
    if(pos == -1)    return presum%prelcm == 0;
    if(!edge && dp[pos][presum][indx[prelcm]] != -1)
        return dp[pos][presum][indx[prelcm]];
    int ed = edge ? digit[pos] : 9;
    ll ans = 0;
    for(int i = 0; i <= ed; ++i) {
        int nowlcm = prelcm;
        int nowsum = (presum*10 + i)%MOD;
        if(i)   nowlcm = lcm(prelcm, i);
        ans += dfs(pos - 1, nowsum, nowlcm, edge && i == ed);
    }
    if(!edge)    dp[pos][presum][indx[prelcm]] = ans;
    return ans;
}

ll solve(ll x){
	memset(digit,0,sizeof(digit));
	int pos=0;
	while(x){
		digit[pos++]=x%10;
		x/=10;
	}
	return dfs(pos-1,0,1,1);
}

int main(){
	std::ios::sync_with_stdio(false);
	init();
	ll l,r;
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>l>>r;
		cout<<solve(r)-solve(l-1)<<"\n";
	}
	return 0;
}



