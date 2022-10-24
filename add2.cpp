#include<iostream>
using namespace std;

int sum(int a ,int b){
	int add = a +b ;
	return add;
}
int main(){
	int a ;
	int b;
	cout<<"enter two numbers:";
	cin>>a;
	cin>>b;
	cout<<"the  sum is :"<<sum(a,b);
	
	
}
