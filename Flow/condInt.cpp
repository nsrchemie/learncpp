#include <iostream>
using namespace std;

int main()
{
 cout << "Enter two integers: " << endl;
 int fNum = 0, sNum = 0;
 cin >> fNum;
 cin >> sNum;

 cout << "Enter \'m\' to multiply, anything else to add: ";
 char userSelection = '\0';
 cin >> userSelection;
 int res = 0;

 if (userSelection == 'm')
   res = fNum * sNum;
 else
  res = fNum + sNum;

 cout << "Result is: " << res << endl;

 return 0;
}
