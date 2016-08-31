#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int compare(const void*a ,const void*b){
	return(*(int*)a-*(int*)b);
}
int main(){
	int n;
	int m;
	cin>>n>>m;
	int box[m];
	for(int i=0;i<m;i++){
		cin>>box[i];
	}
	qsort(box,m,sizeof(int),compare);
	int min=100000000;
	for(int i=0;i<m;i++){
		if(i+n<=m){
			int innermin=box[i+n-1]-box[i];
			if (min>innermin){
				min=innermin;
			}
		}
	
		
	}
	cout<<min;
	return 0;
}
