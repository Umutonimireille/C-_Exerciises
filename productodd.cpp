#include<iostream>
using namespace std;

int main(){
	int i;
	int product = 1 ;
	for( i = 1 ; i< 20; i++){
		if(i% 2 != 0){
			
		product*= i;
		}
			
		
			
	
	}
	cout<< "the product of odd numbers  is :"<<product;
	
}
