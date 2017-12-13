#include <iostream>
#include <string>
using namespace std;


int main()

{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	int piece;
    	cin>>piece;
        bool sat=0;
        for(int a=0;a<33;a++){
            bool flag=0;
            for(int b=0;b<14;b++){
                if(7*b+3*a==piece){
                    cout<<"YES\n";
                    flag=1;
                    sat=1;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(!sat){
            cout<<"NO\n";
        }
        

    	}
    
        
}
