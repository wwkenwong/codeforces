
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include<algorithm>
using namespace std;
const int maxm=700000;
int n,k,a[maxm];
bool ismin(int x)
{
    int t=k;
    int mid=lower_bound(a,a+n,x)-a;
    for(int i=0;i<mid;i++){
        t-=(x-a[i]);
        if(t<0)return 0;
    }
    return 1;
}
bool ismax(int x)
{
    int t=k;
    int mid=upper_bound(a,a+n,x)-a;
    for(int i=mid;i<n;i++){
        t-=(a[i]-x);
        if(t<0)return 0;
    }
    return 1;

}


int main(){
	std::ios::sync_with_stdio(false);
	long long sum=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	if(a[0]==a[n-1]){
		cout<<0;
		return 0;
	}
	int pre=sum/n;
	int l=pre;
	int r=a[n-1];
	if(sum%n){
		l++;
	}
    while(l<r){
        int m=l+(r-l)/2;
        if(ismax(m))r=m;
        else l=m+1;
    }
	int maxn=l;
    l=a[0],r=pre;
    while(l<r){
        int m=l+(r-l+1)/2;
        if(ismin(m))l=m;
        else r=m-1;
    }
    int result=maxn-l;
	cout<<result;
	return 0;
}

