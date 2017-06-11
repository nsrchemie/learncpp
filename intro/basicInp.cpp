#include <iostream>
#include <string>
using namespace std;

int main()
{
 int inputNumber;
 cout << "Enter your age (in int): ";

 cin >> inputNumber;

 cout << "Enter your name: ";
 string inputName;
 cin >> inputName;

 cout << "Your name is " << inputName << " and you are " << inputNumber << " years old!" << endl;

 return 0;
}
