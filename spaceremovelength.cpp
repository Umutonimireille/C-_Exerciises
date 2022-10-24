#include<iostream>
#include<algorithm>
#include<cctype>

using namespace std;

int main(){
	
	string rca = "Rwanda Coding Ac demy";
	int words  = 0 ;
	

	
	
	cout<< "the length of characters before removing space is:"<<rca.length();
	cout <<endl;
	rca.erase(remove_if(rca.begin(),rca.end(),::isspace),
	rca.end());
	
	cout<< "the length of characters after removing space is:"<<rca.size();
		int rcalen = rca.size();
	int i;
	
	for( i =0 ;i <rcalen ; i++){
		
		if(rca[i] == ' '){
			
			words++;
		}
	}
	words = words + 1;
	
	cout<< "number of words:"<<words<<endl;
	
}
