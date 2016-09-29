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
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a%5==0){
			cout<<a/5<<"\n";
		}else{
			cout<<(a/5)+1<<"\n";
		}
	}
	return 0;
	
}
