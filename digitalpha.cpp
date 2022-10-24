//#include<iostream>
//using namespace std;
//int main(){
//	
//	char alphabets [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
//	 'Y', 'Z'};
//	int digit [] = {1,2,3,4,5,6,7,8,9};
//	char vari;
//	
//	
//	cout << "enter  a  letter or digit:"<<endl;
//	cin >>vari;
//	
//	
//}  



// CPP program to find type of input character
#include <iostream>
using namespace std;

void charCheck(char input_char)
{
	// CHECKING FOR ALPHABET
	if ((input_char >= 65 && input_char <= 90)
		|| (input_char >= 97 && input_char <= 122))
		cout << " Alphabet ";

	// CHECKING FOR DIGITS
	else if (input_char >= 48 && input_char <= 57)
		cout << " Digit ";

	// OTHERWISE SPECIAL CHARACTER
	else
		cout << " Special Character ";
}

// Driver Code
int main()
{
	char input_char  ;
	cout<<"enter a digit or lettet:";
	cin>>input_char;
	charCheck(input_char);
	return 0;
}

