#include <iostream>
#include <string>
using namespace std;

int main()
{
 cout << "How many integer shall I reserve memory for?" << endl;
 int numEntries = 0;
 cin >> numEntries;

 int* myNumbers = new int[numEntries];

 cout << "Memory allocated at: 0x" << hex << myNumbers << endl;

 delete[] myNumbers;

 return 0;
}
