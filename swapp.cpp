#include<iostream>
using namespace std;
int main(){
	int first;
	int sec;
	
	
	cout<<"input first number:";
	cin >> first;
	
	cout << "input second number";
	cin >> sec;
	
	int temp = first ;
	first = sec;
	sec = temp;
	
	cout << "after swapping first number:"<<first<<endl;
	cout<< "after swapping second number:"<<sec<<endl;
	
}
