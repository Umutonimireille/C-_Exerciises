#include<iostream>
using namespace std;
 
 int myGlobal = 10;

 int cout (){
 	
 	return myGlobal * myGlobal;
 }

namespace Userdefined{
	int name = 5;
	int cout(){
		return name;
	}


}


int main (){
	
	int c = 7;
//	cout <<first ::val()<< "\n";
	std::cout << "The local variable cout in main is :"<<c <<endl;
	std::cout<<"The variable in userDefined namespace is :"<<Userdefined::name<<endl;
	std::cout<<"The value of myGlobal is :"<<::myGlobal <<endl;
	std::cout<<"The output of cout() in userDefined is :"<<Userdefined::cout()<<endl;
	std::cout<<" The output of global cout() is :"<<::cout();
	
	return 0 ;
	
	
}
