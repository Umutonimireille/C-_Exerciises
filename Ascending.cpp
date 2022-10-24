

#include <iostream>

void sortNum(int& num1, int& num2, int& num3);

int main()
{
    int firstNum, secondNum, thirdNum;
    std::cout << "Enter first number: ";
    std::cin >> firstNum;
    std::cout << "Enter second number: ";
    std::cin >> secondNum;
    std::cout << "Enter third number: ";
    std::cin >> thirdNum;


    sortNum(firstNum, secondNum, thirdNum);
    
    std::cout << "Numbers in order: " << firstNum << ' ' << secondNum << ' ' << thirdNum << '\n';
}

void sortNum(int& num1, int& num2, int& num3)
{
    
    if(num1 > num2)
    {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    }
   
}
