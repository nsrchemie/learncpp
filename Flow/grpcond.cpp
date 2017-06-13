#include <iostream>
using namespace std;

int main()
{

 enum DaysOfWeek
  {
    Sunday=0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
  };


  cout << "Find what days of the week are named after!" << endl;
  cout << "Enter a number for a day (Sunday = 0): ";

 int dayInput = Sunday;
 cin >> dayInput;

 if (dayInput == Sunday)
   cout << "Sunday was named after the Sun!" << endl;
 else if (dayInput == Monday)
   cout << "Monday was named after the Moon!" << endl;
 else if (dayInput == Tuesday)
   cout << "Tuesday was named after Tyr!" << endl;
 else if (dayInput == Wednesday)
   cout << "Wednesday was named after Odin!" << endl;
 else if (dayInput == Thursday)
   cout << "Thursday was named after Thor!" << endl;
 else if (dayInput == Friday)
   cout << "Friday was named after Frey!" << endl;
 else if (dayInput == Saturday)
   cout << "Saturday was named after Saturn!" << endl;
 else
   cout << "Wrong input! Execute again!" << endl;

 return 0;
}
