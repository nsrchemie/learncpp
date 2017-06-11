#include <iostream>
using namespace std;

enum CardinalDirections
{
 North,
 South,
 East,
 West
};

int main()
{
 cout << "North: " << North << endl;
 cout << "South: " << South << endl;
 cout << "East: " << East << endl;
 cout << "West: " << West << endl;

 CardinalDirections windDirection = South;
 cout << "Variable windDirection = " << windDirection << endl;
 return 0;
}
