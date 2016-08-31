#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
const int maxn=105;
int N[maxn];
int M[maxn];
int n=0;
int m=0;
bool ok(int x,int y)
{
    return x-y>=-1 && x-y<=1;
}
int main(){
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>M[i];
	}
	int ptrn=0;
	int ptrm=0;
	int ans=0;
	sort(N,N+n);
	sort(M,M+m);
	while(ptrn<n&&ptrm<m){
		if(abs(M[ptrm]-N[ptrn])==1||M[ptrm]==N[ptrn]){
			ptrn++;
			ptrm++;
			ans++;
		}else{
			if(M[ptrm]>N[ptrn]){
				ptrn++;
			}
			else{
				ptrm++;
			}
		}
	}
	cout<<ans;
	return 0;
}
