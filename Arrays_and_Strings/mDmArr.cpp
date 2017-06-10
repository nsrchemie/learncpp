#include <iostream>
using namespace std;

int main()
{
	const int A_ROWS = 3;
	const int A_COLS = 3;
 int threeRowsNCols [A_ROWS][A_COLS] = {
  {61,62,63}, {73,94,17}, {95,24,79}};

  for (int row = 0; row < A_ROWS; ++row) {
  	for (int col = 0; col < A_COLS; ++col) {
  		cout << "Row [" << row << "] Col [" << col 
  		<< "] = " << threeRowsNCols[row][col] << endl;
  	}
  }
 return 0;
}
