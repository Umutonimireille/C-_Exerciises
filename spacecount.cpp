#include <iostream>
using namespace std;


int spacenumber(int i, int count, char ch)
{


	char buf[50] = "Geeks for";
	ch = buf[0];


	while (ch != '\0') {
		ch = buf[i];
		if (isspace(ch))
			count++;

		i++;
	}


	return (count);
}
int main()
{

	char ch;
	int i = 0, count = 0;


	count = spacenumber(i, count, ch);


	cout << "\nNumber of spaces in the sentence is : " << count;

	return 0;
}



