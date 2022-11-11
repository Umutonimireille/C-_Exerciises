//#include<iostream>
//using namespace std;
//
//int magicArray(int arr[]){
//	
//	int sum = 0;
//	int ndiv = 0;
//	
//	for( int i = 0;i<sizeof(arr)/sizeof(*arr);i++){
//		for(int j = 1;j<=i;j++){
//			if(i% j==0){
//				ndiv++;
//			}
//				cout<< j<<endl;
//			
//		}
//		if(ndiv ==2){
//				sum+=arr[i];
//			}
//			ndiv = 0;
//	
//		
//	}
//		cout<<"the sum is:"<<sum;
//	
//	
//}
//	
//
//
//int main(){
//	int arr[] = { 1,3,5,4,8,13,11 };
//	cout<<magicArray(arr);
//}

// C++ implementation of the above approach


// CPP program to find sum of
// primes in given array.
//#include<iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//// Function to find count of prime
//int primeSum(int arr[], int n)
//{
//	// Find maximum value in the array
//	int max_val = *max_element(arr, arr + n);
//
//	vector<bool> prime(max_val + 1, true);
//
//	prime[0] = false;
//	prime[1] = false;
//	for (int p = 2; p * p <= max_val; p++) {
//
//		if (prime[p] == true) {
//
//			for (int i = p * 2; i <= max_val; i += p)
//				prime[i] = false;
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		if (prime[arr[i]])
//			sum += arr[i];
//
//	return sum;
//}
//
//// Driver code
//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	cout << primeSum(arr, n);
//
//	return 0;
//}

#include <iostream>
using namespace std;

void primeNum(int n){
	 int i;
  bool is_prime = true;

//  cout << "Enter a positive integer: ";
//  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";
}

int main() {
 
 int arr[] = {1,2,3,4,5,7};
 int i;
 
 for(i = 0 ;i <sizeof(arr)/sizeof(*arr);i++){
 	
 }
 
 std::cout<< primeNum(arr[i]);

  return 0;
}










































































