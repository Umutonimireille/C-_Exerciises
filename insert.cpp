#include<iostream>
using namespace std;
int main(){
	
	int scores[]= {1,2,3,4,5,6,6,7,8};
	int item = 10; 
	int k = 3 ; 
	int len = 9;
	int j = len-1;
	while(j<=k){
	scores[j+1] = scores[j];
	j--;
	}
	scores[k] = item;
	for(int i = 0; i< len+1 ; i++){
	cout<<scores[i]<<endl;
	}
	
}
