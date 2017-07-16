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
#define ll long long
using namespace std;
const int maxn=105;
char str[maxn];
int main(){
	std::ios::sync_with_stdio(false);

	cin>>str;
	int length=strlen(str);
	int counter=0;
	int cur_length=1;
	int ans=1;
	while(counter!=length){
		if(str[counter]=='Y'||str[counter]=='A'||str[counter]=='E'||str[counter]=='I'||str[counter]=='O'||str[counter]=='U'){
			ans=max(cur_length,ans);
			cur_length=1;
		}
		else{
			cur_length++;
		}
		counter++;
	}
	ans=max(cur_length,ans);
	cout<<ans;
	return 0;
}
