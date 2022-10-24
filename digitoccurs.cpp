#include <iostream>
using namespace std;


 int occurrences( int n,int d)
{
 int count = 0;


	while (n > 0) {
count = (n % 10 == d)
	? count + 1
	: count;
	n = n / 10;
	}

	return count;
}
int main()
{

	int d = 2;
	int n = 214215421;
    cout << "the number occurs :"<< occurrences(n,d);

	return 0;
}

