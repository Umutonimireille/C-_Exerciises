#include<iostream>
using namespace std;
int main(){
	
	int N [3][4] = {{4,5,5,6},{2,3,4,5},{3,6,7,8}};
	
 for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << N[i][j] << "\t";
    }
    cout<<endl;
  }
}
