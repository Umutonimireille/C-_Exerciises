#include<iostream>
using namespace std;
int main(){
	
	int n ;
	
	cout<<"Enter a number:";
	cin>>n;
	string result = " ";
	
	
	if(n % 3 == 0){
//	cout<<"pling";
	result+="pling";
		
	}
	else if(n % 5 ==0){
    result+= "plang";
//    cout<<"plang";
	}
	
	else if(n % 7 ==0){
//	cout<<"plong";
	result+="plong";
	}
	
	cout<<result;
	
//	return 0;
}
