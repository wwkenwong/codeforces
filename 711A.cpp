#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
const int maxn=30000;
const int inf=1e9+10;
int n;
char map[maxn][5];
bool flag;

int main(){
	std::ios::sync_with_stdio(false);
	flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>map[i][0]>>map[i][1]>>map[i][2]>>map[i][3]>>map[i][4];
		if(!flag){
			if(map[i][0]=='O'&&map[i][1]=='O'){
				map[i][0]='+';
				map[i][1]='+';
				flag=1;
			}else if(map[i][3]=='O'&&map[i][4]=='O'&&!flag){
				map[i][3]='+';
				map[i][4]='+';
				flag=1;
			}
		}
	}
	if(flag){
		cout<<"YES\n";
	}else{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			cout<<map[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
