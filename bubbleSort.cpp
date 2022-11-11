#include<iostream>
using namespace std;
int main(){
	
	int arr [] = {12,55,5,18};
	int temp;
	for(int i = 0; i<sizeof(arr)/sizeof(*arr);i++){
		for(int j = i+1;j<sizeof(arr)/sizeof(*arr);j++){
			if(arr[j] < arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout<<i;
	
	return 0;
}
