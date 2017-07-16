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
const int maxn=10000;
int a[maxn];

int main(){
	int n,l;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int max_d=2*max(a[0],l-a[n-1]);
	for(int i=0;i<n-1;i++){
		max_d=max(max_d,a[i+1]-a[i]);
	}
	//output float
	printf("%.10f\n",max_d/2.);
}
