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
char in[100000];
int main(){
	cin>>in;
	bool ab=0;
	bool ba=0;
	int length=strlen(in);
	for(int i=0;i<length-2;i++){
		if(in[i]=='A'&&in[i+1]=='B'&&in[i+2]!='A'){
			ab=1;
		}
		if(in[i]=='B'&&in[i+1]=='A'&&in[i+2]!='B'){
			ba=1;
		}
	}
	if(in[length-1]=='A'&&in[length-2]=='B'&&in[length-3]!='A'){
		ba=1;
	}
	if(in[length-1]=='B'&&in[length-2]=='A'&&in[length-3]!='B'){
		ab=1;
	}
	if(ab&&ba){
		cout<<"YES";
	}else{
		cout<<"NO";	
	}
}
