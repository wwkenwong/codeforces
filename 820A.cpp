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
const int maxn=100000;
const ll mod=1000000007;
int c,v0,v1,a,l;


int main(){
	int day=0;
	cin>>c>>v0>>v1>>a>>l;
	
	while(c>0){
		int page_count=v0+(day*a);
		if(page_count>v1){
			
			page_count=v1;
			
		}
		if(day!=0){
			c+=l;
		}
		c-=page_count;
		
		day++;
		
	}
	
	cout<<day;
	
	
}
