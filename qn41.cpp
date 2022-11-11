#include<iostream>
using namespace std;
int oddValent(int array[]){
	int i;
	int count= 0;
	int max =0;
	int nbr;
	int rtn = 0;
//	if(
   	 for( i = 0 ; i< sizeof(array)/sizeof(*array);i++){
		for (int j = 0; j < sizeof(array)/sizeof(*array) ; j++) {
		if (array[j] ==  array[i]) {
	count++;
		if(array[i]%2!=0){
		
		rtn = 1;
		
	}
	else{
		rtn  =0;
	}
	}
	

		
	}
	
//	 if(max < count){
//	max = count;
//	nbr = array[i];
//	}
//	
//	count=0;
	
    }
    
    return rtn;
    
//    )
//      cout<< "the nbr is "<<nbr<<endl;
//      cout<<"odd valent";
//      
//      else{
//      	cout<<"function"
//	  }
}



int main(){
	
     int arr[] = {2,4,6};
	 cout<<oddValent(arr);
	return 0;
	
}
