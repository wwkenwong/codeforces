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
const int maxn=500000;
int l[maxn],r[maxn];
int main(){
	std::ios::sync_with_stdio(false);
	int L=0;
	int R=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l[i]>>r[i];
		L+=l[i];
		R+=r[i];
	}
	int k=0;
	int ans=abs(L-R);
	for(int i=0;i<n;i++){
		int c=abs(L-R-(2*l[i])+(2*r[i]));
		if(c>ans){
			ans=c;
			k=i+1;
			
		}
	}
	cout<<k;
	return 0;
	
	
}
