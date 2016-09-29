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
int n,t;
string s;
int main(){
	cin>>t;
	for(int i=0;i<t;i++){
		int c,k;
		cin>>c>>k;
		cin>>s;
		int cons=-inf;
		int place=0;
		for(int j=0;j<c;j++){
			if(s[j]=='0'){
				place++;
				cons=max(place,cons);
			}else{
				place=0;
			}
		}
		if(cons>=k+1){
			cout<<"yes\n";
			//cout<<cons;
		}else{
			cout<<"no\n";
		}
	}
	return 0;
	
}
