#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	// Base Cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// Check to skip middle five
	// numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i += 6) {

		// If n is divisible by i and i+2
		// then it is not prime
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}

	return true;
}

// A utility function that check
// if n1 and n2 are Twin Primes
// or not
bool twinPrime(int n1, int n2)
{
	return (isPrime(n1)
			&& isPrime(n2)
			&& abs(n1 - n2) == 2);
}

// Function to find Twin Prime
// pairs from the given array
int countTwinPairs(int arr[], int n)
{
	int count = 0;
	int rtn  = 0;

	// Iterate through all pairs
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			// Increment count if
			// twin prime pair
			
			if (twinPrime(arr[i], arr[j])) {
			 rtn  = 1;
			}
			else{
				rtn  = 0;
			}
		}
	}

	return rtn;
}

// Driver's code
int main()
{
	int arr[] = { 2, 3, 5, 11,13,9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call to find
	// Twin Primes pair
	cout << countTwinPairs(arr, n);
	return 0;
}

