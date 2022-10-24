#include<iostream>
using namespace std;
int main(){
	
	int scores[] ={1,2,3,4,5,6,7,8};
	int k = 3; int n = 8 ;
	int j = k;
	while(j<n-1){
		
		scores[j] = scores[j+1];
		j = j+1;
	}
	
	for(int  i =0 ;i<n-1 ; i++){
		 	cout<< scores[i];
		
	}
	

}
