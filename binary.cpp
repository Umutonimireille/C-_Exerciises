#include <iostream>
using namespace std;
int main() {
  int decimal, binary = 0, remainder, product = 1;
  cout<<endl;
  cout<<"enter a number:";
  cin >> decimal;
  int count= 0;
  int digits;
//  int sum = 0;
  while (decimal != 0) {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  cout << "The number in the binary form is: " << binary<<endl ;
  
  while(binary != 0){
  	digits  = binary %10;
  		if((digits&1)==1){
  				count++;
  		}
 	
 		 digits = digits>>1;
  	binary/=10;
  	
  }
 
  cout<<"number of ones are:"<<count;

  
  
  return 0;
  
}
