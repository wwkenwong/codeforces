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
	int length=strlen(in);

	int itr=1;

	for(;itr<length;itr++){
		if(in[itr-1]=='A'&&in[itr]=='B'){
			itr+=2;
			break;
		}
	}

	for(;itr<length;itr++){
		if(in[itr-1]=='B'&&in[itr]=='A'){
			cout<<"YES";
			return 0;
		}
	}
	itr=1;
	for(;itr<length;itr++){
		if(in[itr-1]=='B'&&in[itr]=='A'){
			itr+=2;
			break;
		}
	}

	for(;itr<length;itr++){
		if(in[itr-1]=='A'&&in[itr]=='B'){
			cout<<"YES";
			return 0;
		}
	}


	cout<<"NO";


}
