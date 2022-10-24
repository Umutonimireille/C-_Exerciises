#include<iostream>
using namespace std;

//void print(){
//	cout<< "some text";
//}
double maximum(double x, double y , double z){
	double max  = x;
	if(y>max)
		max = y;
	else if (z>max)
		max= z;
	
	return max;
	
}

void duplicate(int a,int b , int c){
	a =a*2;
	b = b*2;
	c = c*2;
	
	
}
int main(){
	int x = 5 ; int y = 9 ; int  z = 6 ;
	
	duplicate(x,y ,z);
	
	cout << "x:"<<x<<"y:"<<y<<"z:"<<z;
	
//	print();
   cout << "the maximum is :"<<maximum(2.34,5.67,7.89);
 
}
