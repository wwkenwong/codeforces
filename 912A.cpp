#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>  
using namespace std;

int main(){
	long long a,b,x,y,z;

	cin>>a>>b;
	cin>>x>>y>>z;

	//x: a*2
	//y: a+b
	//z: b*3

	long long a_tot=(x*2)+y+0;
	long long b_tot=(z*3)+y;

	long long missing_a=(a_tot)-(a);
	long long missing_b=(b_tot)-(b);

	if(missing_a<0){

		missing_a=0;
	}
	if(missing_b<0){

		missing_b=0;
	}
	long long missing=missing_a+missing_b;
	cout<<missing;
	


}
