#include<iostream>
using namespace std;

int digitSum(int num,int z){
	int sum = 0;
	int remainder;
	 while(num != 0) {
    remainder = num % 10;
   num /= 10;
   sum+=remainder;
   
   }
 cout<<endl;
 cout<<"remainder:"<<sum<<endl;
    if(remainder > z){
    	cout<<"not digit sum";
   	return 0;
   }
   else {
   		cout<<" digit sum";
   	return -1;
   }
 
}


int main(){
	
	int num = 32121;
	int z = 10;
	digitSum(num,z);
	
	
}
