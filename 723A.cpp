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
int a[3];
int main(){
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<a[2]-a[0];
    return 0;
}
