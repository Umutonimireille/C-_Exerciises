#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void occurence(int arr[], int n)
{
    int count = 0;
   int max = 0;
   int nbr ;
	for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++) {
		if (arr[j] ==  arr[i]) {
	count++;
	}


}
    if(max < count){
	max = count;
	nbr = arr[i];
	}
	
	count=0;
		
	}
    cout<< "the nbr is "<<nbr<<endl;
    cout<<"the number occured:"<<max;
        



}
int main()
{
	int arr[] = { 1,2,2,3,4,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	occurence(arr, n);
	return 0;
}

