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
const int maxn=500000;
int main(){
	int n;
	cin>>n;
	if(n%2){
		int no=n/2;
		cout<<no<<"\n";
		for(int i=0;i<no-1;i++){
			cout<<"2 ";
		}
		cout<<"3 ";
	}else{
		int no=n/2;
		cout<<no<<"\n";
		for(int i=0;i<no;i++){
			cout<<"2 ";
		}		
	}
}
