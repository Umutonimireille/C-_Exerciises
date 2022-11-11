#include<iostream>
using namespace std;

void normalNumber(int num){
	
//	int i;
//	int rtn =0;
	for(int i = 0;i < num ;i++){
		if(num % i == 0){
			cout<<i<<endl;
			
//			if(i%2 != 0){
////				rtn = 1;
//			cout<<"the number is not a normal number";
//			}else{
////				rtn =0;
//				cout<<"it is a normal number";
//			}
		}
	}
//	cout<<"rtn:"<<rtn;
//	return rtn;
}

int main(){
	int n = 9;
   normalNumber(n);
   
   return 0;
	
}
