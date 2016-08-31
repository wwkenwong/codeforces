#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>  
using namespace std;
int main(){
	int container[101];
	memset(container,0,sizeof(container));
	int sum=0;
	int hit2=0;
	int hit3=0;
	for(int i=0;i<5;i++){
		int temp;
		cin>>temp;
		sum+=temp;
		container[temp]++;
		if(container[temp]>=3){
			if(temp>hit3){
				hit3=temp;
			}
		}
		if(container[temp]==2){
			if(temp>hit2){
				hit2=temp;
			}
		}
		
	}
	if(hit2==hit3){
		int minus=hit3*3;
		sum-=minus;
		cout<<sum;
		return 0;
	}
	else{
		
		int minus=max(hit2*2,hit3*3);
		sum-=minus;
		cout<<sum;
		return 0;
		
	}
}
