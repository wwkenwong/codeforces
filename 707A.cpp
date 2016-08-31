#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
const int maxn=300;
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	bool wd=0;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char a;
			cin>>a;
			if(a=='C'||a=='M'||a=='Y'){
				wd=1;
			}
		}
	}
	if(wd==1){
		cout<<"#Color\n";
		return 0;
	}
	cout<<"#Black&White\n";
}
