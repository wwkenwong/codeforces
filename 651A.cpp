#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	int c1,c2;
	cin>>c1>>c2;
	int min=0;
	while(c1!=0&&c2!=0){
		if(c1>c2){
			swap(c1,c2);
		}
		if(c1==1&&c2==1){
			break;
		}
		c1++;
		c2-=2;
		min++;
	}
	cout<<min;
	return 0;
}
