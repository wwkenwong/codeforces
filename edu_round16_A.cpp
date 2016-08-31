#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	cin>>a;
	if(a=="a1"||a=="h1"||a=="h8"||a=="a8"){
		cout<<"3";
		return 0;
	}
	else{
		if(a=="b8"||a=="c8"||a=="d8"||a=="e8"||a=="f8"||a=="g8"){
			cout<<"5";
			return 0;
		}
		if(a=="b1"||a=="c1"||a=="d1"||a=="e1"||a=="f1"||a=="g1"){
			cout<<"5";
			return 0;
		}
		if(a=="a2"||a=="a3"||a=="a4"||a=="a5"||a=="a6"||a=="a7"){
			cout<<"5";
			return 0;
		}
		if(a=="h2"||a=="h3"||a=="h4"||a=="h5"||a=="h6"||a=="h7"){
			cout<<"5";
			return 0;
		}
		cout<<"8";
		return 0;
	}
}
