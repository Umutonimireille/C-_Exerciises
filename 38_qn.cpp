#include<iostream>
using namespace std;

void findCommon(int a[],int b[]){
	int counter = 0;
	int temp = 0;
	int tempCounter = 0;

    for(int i=0; i<sizeof(a)/sizeof(*a); i++){
            temp=a[i];
            tempCounter=0;
            for(int j=0; j<sizeof(b)/sizeof(*b); j++){
                if (a[i]==b[j]){
                    tempCounter++;  
                }

            }

//            if (tempCounter == 1) {
//                temp = a[i];
//
//                counter++;
                cout<<"temp:"<<temp<<endl;
//
////                System.out.println(temp);
//
//            }

        }
}

int main(){
	int a[] = {1,2,3,4,5,6};
	int b[]= {1,2,7,8,6,9};
	
	findCommon(a,b);
		return 0;
}

	

