#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int b = 8;
	int a = 6;
	int c = 2;
  
	
  float	x1 = -b+sqrt(pow(b,2)-4*a*c)/2*a;
  float x2 = -b-sqrt(pow(b,2)-4*a*c)/2*a;
	
	cout <<"X1 is :"<<x1<<endl;
	cout<<"X2 is :"<<x2;
	
	
	return 0;
}
