#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int container[n+1];
	int b[n+1];
	b[0]=0;
	container[0]=0;
	if(k==1){
		for(int i=1;i<n+1;i++){
			cin>>container[i];
		}
		int min=100000000;
		int index=1;
		for(int i=1;i<n+1;i++){
			if(min>container[i]){
				min=container[i];
				index=i;
			}	
		}
		cout<<index;
		return 0;

	}
	for(int i=1;i<n+1;i++){
	
		cin>>b[i];
		if(i-k<0){
			container[i]=b[i]+container[i-1];
		}
		else{
			container[i]=b[i]+container[i-1]-b[i-k];
		}
		
		
	}

	int curmin=100000000;
	int marker=1;
	for(int i=k;i<n+1;i++){
		if(curmin>container[i]){
			curmin=container[i];
			marker=i-k+1;
		}
		
		
		
	}
//	if(marker<=0){
//		cout<<"1";
//		return 0;
//	}
	cout<<marker;
	
	return 0;
}
