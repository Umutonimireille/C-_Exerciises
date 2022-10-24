//#include<iostream>
//#include<math.h>
//#define PI 3.14159
//using namespace std;
//
//
//int main(){
//	
//
//	float radius;
//	
//	float area = PI*(radius*radius) ;
//	float circumference  = 2*radius*PI;
//	
//	cout<<"enter the radius:";
//	cin>>radius ;
//	
//	cout<<"The area is :"<<area<<endl;
//	cout<<"The circumference:"<< circumference;
//	
//
//}


#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
		cout << "\n\n Find the area and circumference of any circle :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input the radius(1/2 of diameter) of a circle : ";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;		
		
        cout << endl;
        return 0;
    }
