#include<iostream>
using namespace std;
#define  nbrofdistricts 30;
#define pi 3.14159

int main(){ 

   float rad;
   float diameter = rad*2;
   
   cout << "enter radius:";
   cin >> rad;
    
	
	double area =  rad*rad*pi;
	cout<< "area: "<<area << endl;
	
	double circ = diameter *pi;
	cout << "circumference:"<< circ<< endl;
	

//	cout << nbrofdistricts;
      return  0;
}
