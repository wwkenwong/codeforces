#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;
const int N=5e5+9;
typedef long long ll;
ll sum;
int a[N];
int n,k,pre;
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
int main()
{
    //freopen("f.txt","r",stdin);
    scanf("%d%d",&n,&k);
    sum=0;
    for(int i=0;i<n;i++)scanf("%d",&a[i]),sum+=a[i];
    sort(a,a+n);
    if(a[0]==a[n-1]){printf("0");return 0;}
    pre=sum/n;
    int l=pre,r=a[n-1];
    if(sum%n)l++;
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

    printf("%d\n",maxn-l);
    return 0;
}
