#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int container[n+1];
	int target[n+1];
	for(int i=1;i<n;i++){
		cin>>container[i];
		target[i]=container[i]+i;
	}
	bool flag=1;
	int curstep=1;
	while(flag==1){
		if(curstep>k){
			cout<<"NO";
			return 0;
		}
		if(curstep==k){
			cout<<"YES";
			return 0;
		}
		curstep=target[curstep];
	}
	return 0;
}
