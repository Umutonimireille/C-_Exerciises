// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// class myMethod{
//     public:
//     int age;
//     string names;
//     string email;
//     };

// int main() {
//     // Write C++ code here
//     myMethod first ;
//     first.age   = 18 ;
//     first.names = "oxane";
//     first.email = "djd";
//     std::cout << first.age<<endl;
//     std::cout << first.names<<endl;
//     std::cout << first.email<<endl;

//     return 0;
// }

// void myFunction(string fname) {
//   cout << fname << " Refsnes\n";
// }

// int main() {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");
//   return 0;
// }


class Animal {
    
    public:
    
    void animalSound(){
        std::cout<<"I am an animal"<<endl;
    }
    
};

class Cat : public  Animal {
    public:
    
    void animalSound(){
        std::cout<<" I am a catAnimal"<<endl;
    }
};


int main(){
    
    Animal first;
    Cat sec;
     
    first.animalSound();
    sec.animalSound();
    
    
    
    return 0;
}



































