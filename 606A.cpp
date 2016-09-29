#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <sstream>
#include <deque>

using namespace std;
const int maxn=200000;
const int inf=1e9+10;

int main(){
	std::ios::sync_with_stdio(false);
	int a,b,c,x,y,z;
	int a_extra=0;
	int b_extra=0;
	int c_extra=0;
	
	bool oka=0;
	bool okb=0;
	bool okc=0;
	cin>>a>>b>>c>>x>>y>>z;
	if(a>=x&&b>=y&&c>=z){
		cout<<"Yes";
		return 0;
	}else{
		a_extra=a-x;
		b_extra=b-y;
		c_extra=c-z;
		if(a_extra>=0){
			oka=1;
			a_extra=a_extra-(a_extra%2);
			
		}
		if(b_extra>=0){
			okb=1;
			b_extra=b_extra-(b_extra%2);
			
		}
		if(c_extra>=0){
			okc=1;
			c_extra=c_extra-(c_extra%2);
		}
		
	}
	if(!oka&&okb||!oka&&okc){
		if((b_extra+2*a_extra)>=0){
			b_extra+=2*a_extra;
			oka=1;
		}else{
			if((c_extra+2*a_extra)>=0){
				c_extra+=2*a_extra;
				oka=1;
			}else{
				if(okb&&okc&&b_extra>=2&&c_extra>=2){
					if((c_extra+b_extra+2*a_extra)>=0){
						
						
						oka=1;
			}
				}
			}
		}
	}
	if(!okb&&oka||!okb&&okc){
		if((a_extra+2*b_extra)>=0){
			a_extra+=2*b_extra;
			okb=1;
		}else{
			if((c_extra+2*b_extra)>=0){
				c_extra+=2*b_extra;
				okb=1;
			}else{
				if(oka&&okc&&a_extra>=2&&c_extra>=2){
					if((c_extra+2*b_extra+a_extra)>=0){
						
						
						okb=1;
			}
				}
			}
		}
	}
	if(!okc&&okb||!okc&&oka){
		if((b_extra+2*c_extra)>=0){
			b_extra+=2*c_extra;
			okc=1;
		}else{
			if((a_extra+2*c_extra)>=0){
				a_extra+=2*c_extra;
				okc=1;
			}else{
				if(okb&&oka&&a_extra>=2&&b_extra>=2){
					if((2*c_extra+b_extra+a_extra)>=0){
						
						
						okc=1;
			}
				}
			}
		}
	}
	if(oka&&okb&&okc){
		cout<<"Yes";
		return 0;
	}
	cout<<"No";
	return 0;
	
}
