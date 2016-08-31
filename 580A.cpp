#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int	container[n];
	int counter[n];
	
	for(int i=0;i<n;i++){
		cin>>container[i];
	}
	for(int i=0;i<n;i++){
		if(i+1<n){
			if(container[i]<=container[i+1]){
				counter[i]=1;
			}
			else{
				//a not possible element of a sequence set zero
				counter[i]=0;
			}
		}
	}
	int currmax=1;
	int maxm=1;
	for(int i=0;i<n;i++){
		if(counter[i]==1){
			currmax++;
		}
		else{
			currmax=1;
		}
		if(currmax>maxm){
			maxm=currmax;
		}
	}
	
	
	cout<<maxm;
	return 0;
}
