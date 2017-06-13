#include <iostream>
using namespace std;

int main()
{
 cout << "Use boolean values (0/1) to answer the Questions" << endl;
 cout << "Is it raining? ";
 bool isRain = false;
 cin >> isRain;

 cout << "Do you have buses on the streets? ";
 bool busSt = false;
 cin >> busSt;

 if (isRain && !busSt)
  cout << "You cannot make it to work" << endl;
 else
  cout << "You can make it to work" << endl;

 if (isRain && busSt)
 cout << "Take an umbrella" << endl;

 if ((!isRain) && busSt)
  cout << "Enjoy the sun!" << endl;

 return 0;
}
