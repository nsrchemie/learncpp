#include <iostream>
#include <string.h>
using namespace std;

int main()
{
 char sayHello[] = {'H', 'e', 'l','l','o',' ','w','o','r','l','d','\0'};
 cout << sayHello << endl;
 cout << "Size of array: " << sizeof(sayHello) << endl;

 cout << "Replacing space with null" <<endl;
 sayHello[5]='\0';
 cout << sayHello << endl;
 cout << "Size of array (pointer): " << sizeof(sayHello) << endl;
 cout << "Length of string (ignoring chars after null terminator" << strlen(sayHello) << endl;
 return 0;
}
