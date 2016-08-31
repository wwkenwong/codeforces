#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
const int maxn=105;
int a,b,c;
int main(){
	std::ios::sync_with_stdio(false);
	cin>>a>>b>>c;
	int maxi=0;
	maxi=max(a+b+c,(a+b)*c);
	maxi=max(maxi,a*(b+c));
	maxi=max(maxi,a*b*c);
	cout<<maxi;
	return 0;
}
