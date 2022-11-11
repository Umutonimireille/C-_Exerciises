#include<iostream>
using namespace std;

int fineArray(int arr[]){
	int ndiv = 0;
	
	for(int i = 2; i <sizeof(arr)/sizeof(*arr);i++){
		for(int j = 1; j<=i;j++){
			if(i%j==0){
				ndiv++;
				
			}
			
		}
		
	
	}
	
	cout<<"prime numbers are:"<<i;
}
int main(){
	
	
	cout<<fineArray();
	
	return 0;
}
