#include <iostream>
using namespace std;
constexpr int Square(int number) { return number*number; }

int main()
{
 const int ARR_LEN = 5;

 int myNums [ARR_LEN] = {3,6,-16,81,-2};

 //Create array with 25 slots
 int moreNums [Square(ARR_LEN)];

 cout << "Enter index of element to be changed: ";
 int elIndex;
 cin >> elIndex;

 cout << "Enter new value: ";
 int newVal;
 cin >> newVal;

 myNums[elIndex] = newVal;

 cout << "The element you selected in the array was " <<
 elIndex << " and the new value of myNums[" << elIndex << "] is "
 << myNums[elIndex] << endl;

 return 0;
}

