#include <iostream>
using namespace std;

int main()
{
 int startVal = 101;
 cout << "Starting value of integer var being operated on " << startVal << endl;

 int postincIncrement = startVal++;
 cout << "Using Postfix increment, postfix copy equals " << postincIncrement << endl;
 cout << "Current value of integer var is now " << startVal << endl;
 return 0;
}
