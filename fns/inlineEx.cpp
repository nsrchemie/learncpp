#include <iostream>
using namespace std;

inline long DoubleNum (int inputNum)
{
 return inputNum*2;
}

int main()
{
 cout << "Enter an integer: ";
 int inp = 0;
 cin >> inp;

 cout << "Double is: " << DoubleNum(inp) << endl;

 return 0;
}
