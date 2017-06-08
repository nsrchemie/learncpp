#include <iostream>

using namespace std;

int main()
{
 int myNumbers [4] = {2,6,54,73};

 cout << "Bytes consumed by an array = sizeof(element type) * Number of Elements" << endl;
 cout << "in this case we have an int array of length 5 so the amount of memory reserved by compiler for array is: " << sizeof(int) * 5 << endl;

 cout << "using ArrayName[pos] you can index, the first value of myNumbers is: " << myNumbers[0] << endl;

 return 0;
}
