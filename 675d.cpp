#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
vector<int> record;
class btree{
public:
	int data;
	btree* left_son;
	btree* right_son;
	//root constructor
	btree(int no):data(no),left_son(NULL),right_son(NULL){
		
	}
	void append(int new_no){
		if(new_no>data){
			if(right_son==NULL){
				btree* new_ptr=new btree(new_no);
				right_son=new_ptr;
				record.push_back(data);
			}
			else{
				right_son->append(new_no);
			}
		}
		else{
			if(left_son==NULL){
				btree* new_ptr=new btree(new_no);
				left_son=new_ptr;		
				record.push_back(data);	
			
		}
			else{
				
				left_son->append(new_no);
			}
		
	}
}

};
int main(){
	int n;
	cin>>n;
	int container[n];
	for(int i=0;i<n;i++){
		cin>>container[i];
	}
	btree* new_tree=new btree(container[0]);
	for(int i=1;i<n;i++){
		new_tree->append(container[i]);
	}
	for(int i=0;i<record.size();i++){
		cout<<record[i]<<" ";
	}
	return 0;
}
