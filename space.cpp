#include<iostream>
#include<algorithm>
#include<cctype>

using namespace std;

int main(){
	
	string rca = "Rwanda Coding Ac demy";
	
	cout<< "the length of characters before removing space is:"<<rca.length();
	
	rca.erase(remove_if(rca.begin(),rca.end(),::isspace),
	rca.end());
	
	cout<< "the length of characters after removing space is:"<<rca.length();
}
