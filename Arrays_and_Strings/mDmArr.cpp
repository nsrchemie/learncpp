#include <iostream>
using namespace std;

int main()
{
 int threeRowsNCols [3][3] = {
  {61,62,63}, {73,94,17}, {95,24,79}};

 cout << "Row 0: " << threeRowsNCols [0][0] << " "
      << "Row 0: " << threeRowsNCols [0][1] << " "
      << "Row 0: " << threeRowsNCols [0][2] << endl;

 cout << "Row 1: " << threeRowsNCols [1][0] << " "
      << "Row 1: " << threeRowsNCols [1][1] << " "
      << "Row 1: " << threeRowsNCols [1][2] << endl;

 cout << "Row 2: " << threeRowsNCols [2][0] << " "
      << "Row 2: " << threeRowsNCols [2][1] << " "
      << "Row 2: " << threeRowsNCols [2][2] << endl;
 return 0;
}
