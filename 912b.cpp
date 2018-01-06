#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>  
#include <cmath>  
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;

	if(k==1){
		cout<<n;
		return 0;
	}
	else{
		long long digit=floor(log2l(n));
		long long ret=powl(2.0,digit+1)-1;

		cout<<ret;
		return 0;


	}
}
