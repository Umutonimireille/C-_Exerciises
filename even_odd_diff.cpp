#include<iostream>
using namespace std;

void difference(int arr[]){
	
	int even= 0;
	int odd = 0;
	int diff ;
	
	for(int i = 0 ; i < 4 ;i++){
		if(arr[i] % 2 ==0 ){
			even+=arr[i];
			

		}
	else {
		odd+=arr[i];
		
	}

	
}
	
	diff =even-odd ;
	cout<<"The even sum is:"<<even<<endl;
	cout<<"The odd sum is :"<<odd<<endl;
	cout<< "the diff is:"<<diff;
}

int main(){
	
	int  arr = 1234;
	int digit[4];
	
//	while(arr > 0){
//		int digit  = arr%10;
//		arr /= 10;
//	}

   for (int  i =0 ; i < 4 ; i++ ){
   	 digit[i]  = arr%10;
   	 
		arr /= 10;
   }
	
    difference(digit);
	
	
	return 0;
}
