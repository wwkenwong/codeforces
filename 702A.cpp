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
const int maxn=1000000;
const ll mod=1000000007;
int a[maxn];
int trend[maxn];
int n;

int main(){

    cin>>n;
    memset(a,0,sizeof(a));
    memset(trend,0,sizeof(trend));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>0){
            trend[i]=1;
        }else{
            if(a[i]-a[i-1]<0){
                trend[i]=-1;
            }
        }

    }
    int out=1;
    int last=1;
    for(int i=1;i<n;i++){
        if(trend[i]==1){
            out+=1;
        }else{
            last=max(last,out);
            out=1;

        }

    }
    last=max(last,out);
    cout<<last;
    return 0;

}