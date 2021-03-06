#include <iostream>
using namespace std;
// constexpr int Square(int number) { return number*number; }

int CheckIndexInput(int limit,int &nInd) {
 	cin >> nInd;
    if (nInd >= limit) {
      cout << "You have tried to access a nonexistent element";
      cin >> nInd;
      CheckIndexInput(limit,nInd); } 
    return 0;
}


int main()
{
 const int ARR_LEN = 5;

 int myNums [ARR_LEN] = {3,6,-16,81,-2};

 // //Create array with 25 slots
 // int moreNums [Square(ARR_LEN)];

 cout << "Length of the array is " << distance(begin(myNums),end(myNums));
 cout << "\nEnter index of element to be changed: \n";
 int elIndex;


 CheckIndexInput(ARR_LEN,elIndex);

 // if (elIndex >= ARR_LEN) {
 // cout << "You have tried to access a nonexistent element" << endl;
 // return 0;
 // }

 cout << "The value of that index in the array is: " << myNums[elIndex] << endl;
 cout << "Enter new value: ";
 int newVal;
 cin >> newVal;

 myNums[elIndex] = newVal;

 cout << "The element you selected in the array was " << elIndex << endl;
 cout << "The new value of array[" << elIndex << "] is "<< myNums[elIndex] << endl;

 return 0;
}

