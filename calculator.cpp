#include<iostream>
using namespace std;

int add(int a , int b){
	
	int sum = a + b;
	return sum;
}

int subtract(int a,int b ){
	
	int sub = b - a;
	return sub;
}
int multi(int a,int b ){
	
	int multi = b - a;
	return multi;
}
int division(int a  ,int b){
	
	int div = b/a;
	return div;
}

int modulus1(int a,int b ){
	
	int mod = b % a;
	return mod;
}


int main(){;
	
	int n;
	int b;
	int a;
	
	cout << "Menu"<< endl;
	cout<< "1:Add"<<endl;
	cout<< "2:Subtract"<<endl;
	cout<< "3:Divison"<<endl;
	cout<< "4:Multiply"<<endl;
	cout <<"5:Modulus"<<endl;
	
    cout<< "enter your choice:"<<endl;
    cin >> n;
    
     cout<< "enter two numbers of your choice:"<<endl;
    cin >> a;
    cin >> b;
    
    switch (n){
    case 1 :
    cout<< "Result is"<<add(a,b)<<endl;
    break;
    
    case 2 :
    	cout<< "Result:"<<subtract(a,b)<<endl;
    	break;
    	
    	case 3 :
    		cout<< "Result:"<<multi(a,b)<<endl;
    		break;
    		
    		case 4 :
    			cout<<"Result:"<<division(a,b)<<endl;
    			break;
    			
    			case 5 :
    				cout<<"Result:"<<modulus1(a,b)<<endl;
    				break;
	}
	

		
    
   
    
   
    
}
