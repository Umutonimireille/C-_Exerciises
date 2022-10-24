#include <iostream>
using namespace std;
int main() {
   int n = 100;
    int product = 1;
    int ndiv = 0;
   for (int i = 2; i < n; i++) {
    
         
         for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
              ndiv++;
            }
         
       
      }
        if (ndiv==2) {
            product = product * i;
         }
         ndiv=0;
   }
   cout << "the product is :"<<product;
   return 0;
}
