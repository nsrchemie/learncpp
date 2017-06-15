#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius);
double Area(double radius, double height);

int main()
{

 cout << "Enter z for Cylinder, c for Circle: ";
 char userSelection = 'z';
 cin >> userSelection;

 cout << "Enter radius: ";
 double radious = 0;
 cin >> radius;

 if (userSelection == 'z')
 {
  cout << "Enter height: ";
  double height = 0;
  cin >> height;

  cin << "area of cylinder is: "
