#include <iostream>
using namespace std;
int main()
{
//    int n1 = 5, n2 = 10, max;
//    max = (n1 > n2) ? n1 : n2;
//    cout << "Largest number between " << n1 << " and " << n2 << " is "<< max;
//    return 0;
   int marks;
   cout << "enter ur marks:"<<endl;
   cin>>marks;
   marks >=10 ? cout << "passed \n" :cout << "failed \n";
   string grades = (marks>=16 )?" A":(marks>14)?" B":(marks >10)?" C":" D";
   cout<<  "grade is"<<grades;
   



}

