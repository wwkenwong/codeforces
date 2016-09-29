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
const int maxn=200000;
const int inf=1e9+10;
int n;
int a[maxn];
int b[maxn];

int main(){
	std::ios::sync_with_stdio(false);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	b[n]=a[n];
	for(int i=n-1;i>=1;i--){
		b[i]=a[i]+a[i+1];
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
