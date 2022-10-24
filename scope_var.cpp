#include <iostream>
using namespace std;
namespace finance {
	int amount = 15;
}

int main (){
	int amount = 12; 
	cout << "the amount is"<<amount << endl;
//	cout << "the global amount is "<<:: amount <<endl ; 
	cout << "the amont from  namespace finamce is "<<finance::amount <<endl;
	return 0 ;
}
