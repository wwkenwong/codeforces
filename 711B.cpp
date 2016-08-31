#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
const int maxn=1000;
const int inf=1e9+10;
int n;
int map[maxn][maxn];
int main(){
	cin>>n;
	
	
	//horizontal
	int maxnn=-10000;
	int minu=inf;
	//vertical
	int maxnn_ver=-10000;
	int minu_ver=inf;
	//diagonal
	int maxnn_dia=-10000;
	int minu_dia=inf;
	int sum_dia=0;
	
	//horiz
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			cin>>map[i][j];
			sum+=map[i][j];
			
			if(i==j){
				sum_dia+=map[i][j];
			}
		}
		maxnn=max(sum,maxnn);
		minu=min(sum,minu);
	}
	
	
	//vertical
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=map[j][i];
		}
		maxnn_ver=max(sum,maxnn_ver);
		minu_ver=min(sum,minu_ver);		
	}
	//dia array
	
	int sum_anti_dia=0;
	for(int i=0;i<n;i++){
		sum_anti_dia+=map[i][n-1-i];
	}
	maxnn_dia=max(sum_anti_dia,sum_dia);
	minu_dia=min(sum_anti_dia,sum_dia);
	
	int dia_diff=maxnn_dia-minu_dia;
	
	int hori_diff=maxnn-minu;
	int ver_diff=maxnn_ver-minu_ver;
	cout<<dia_diff<<" "<<hori_diff<<" "<<ver_diff<<"\n";
	
	
	if(dia_diff==0&&hori_diff==0&&ver_diff==0){
		cout<<"-1";
		return 0;
	}
	else if(dia_diff==0&&hori_diff==ver_diff&&hori_diff>0){
		cout<<hori_diff;
		return 0;
	} if(hori_diff==0&&dia_diff==ver_diff&&dia_diff>0){
		cout<<dia_diff;
		return 0;
	} if(ver_diff==0&&dia_diff==hori_diff&&hori_diff>0){
		cout<<hori_diff;
		return 0;
	}if(ver_diff==dia_diff&&dia_diff==hori_diff&&hori_diff>0){
		cout<<hori_diff;
		return 0;
	}
	else{
		cout<<"-1";
		return 0;
	}
	
	
}
