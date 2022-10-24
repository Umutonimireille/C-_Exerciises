#include <iostream>

using namespace std;

int main(){
	int n;
	int i;
	int mynumbers;
	int sum  = 0 ;
	int average;
	
	cout << "enter nbr of numbers:"<<endl;
	cin >> n;
	if( n > 0){
		for( i = 0 ; i <= n;i++){
			cout << "numbers intered"<< i << "numbers"<<endl;
			cin>>mynumbers;
		
		
	
	if(mynumbers <= 0){
		cout << "renter the numbers"<<endl;
	}
	sum+=mynumbers;
	average = sum / n;
}

	cout << "the sum is:"<<sum << endl;
	cout << "the average is:"<<average;
	
	return 0;
    }
  }
