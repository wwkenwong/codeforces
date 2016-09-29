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
int main(){
	std::ios::sync_with_stdio(false);
	memset(a,0,sizeof(a));
	cin>>n;
	int ptr=0;
	for(int i=0;i<n;i++){
		a[ptr]=1;
		while(ptr&&a[ptr]==a[ptr-1]){
			a[ptr-1]++;
			ptr--;
		}
		ptr++;
	}
	for(int i=0;i<ptr;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
