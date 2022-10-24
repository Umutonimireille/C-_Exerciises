#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i;
	int n[] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	int hold;
	int product = 0;
	int difference;
	
	for(i=0 ;i<= (sizeof(n)/sizeof(*n)) ;i++){
	sum+=i;
	product+= pow(i,2);
	
		
	}
	hold = pow(sum,2);
    difference = hold - product;
    
	cout<<"the sum is:"<<hold<<endl;
	cout<< "the product is:"<<product<<endl;
	cout<<"the difference is:"<<difference<<endl;
		
	

	
		

	
	
}


