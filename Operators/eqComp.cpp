#include <iostream>
using namespace std;

int main()
{
 cout << "Enter two integers for comparison: " << endl;
 int num1 = 0, num2 =0;
 cin >> num1;
 cin >> num2;

 bool isEq = (num1 == num2);
 cout << "Result of equality test: " << isEq << endl;

 bool isUneq = (num1 != num2);
 cout << "Result of equality test: " << isUneq << endl;

 bool isGt = (num1 > num2);
 cout << "Result of num1 > num2: " << isGt << endl;

 bool isLt = (num1 < num2);
 cout << "Result of num1 < num2: " << isLt << endl;

 bool isGte = (num1 >= num2);
 cout << "result of num1 >= num2: " << isGte << endl;

 bool isLte = (num1 <= num2);
 cout << "Result of num1 <= num2: " << isLte << endl;

 return 0;
}
