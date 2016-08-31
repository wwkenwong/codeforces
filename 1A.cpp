#include <iostream>
#include <set>
#include <map>

using namespace std;
int main(){
	long long n;long long m;long long a;
	cin>>n>>m>>a;
	long long outputx;
	long long outputy;

	outputx=n/a;
	outputy=m/a;
	if(n%a!=0){
		outputx++;
	}
	if(m%a!=0){
		outputy++;
	}
	cout<<outputx*outputy;
	
}
