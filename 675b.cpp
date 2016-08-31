#include <iostream>
#include <set>
#include <map>
int main(){
	long long a,b,c,d;
	long long n;
	long long lh,sum;
	std::cin>>n>>a>>b>>c>>d;
	int counter=0;
	for(lh=1;lh<n+1;lh++){
		sum=lh+a+b;
		if(sum-a-c>0&&sum-a-c<=n){
			if(sum-b-d>0&&sum-b-d<=n){
				if(sum-d-c>0&&sum-d-c<=n){
					counter++;
				}
			}
		}
	}
	std::cout<<counter*n;
	return 0;
}
