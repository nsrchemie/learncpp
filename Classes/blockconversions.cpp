#include <iostream>
using namespace std;

class Human
{
 int age;
public:
 explicit Human(int humansAge) : age(humansAge) {}
};

void DoSomething(Human person)
{
 cout << "Human sent did something" << endl;
 return;
}

int main()
{
 Human kid(10);
 Human anotherKid = Human(11);
 DoSomething(kid);

 return 0;
}
