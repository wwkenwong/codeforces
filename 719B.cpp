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
string s;
int n,w1,w2,ans,ans1,ans2;
int main()
{
	std::ios::sync_with_stdio(false);
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(i%2){if(s[i]!='r')w1++;}
        else{if(s[i]!='b')w2++;}
    }
    ans=abs(w1-w2)+min(w1,w2);
    w1=w2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2){if(s[i]!='b')w1++;}
        else{if(s[i]!='r')w2++;}
    }
    ans=min(ans,abs(w1-w2)+min(w1,w2));
    cout<<ans<<endl;
}
