#include <iostream>
using namespace std;

class Parent
{
public:
  int age;

  // Constructor with a parameter
  Parent(int initialAge)
  {
    age = initialAge;
  }
};

class Child : public Parent
{
public:
  // Pass num to the Parent constructor
  Child(int num) : Parent(num) { //num is passed to Parent constructor

  } 
};

int main()
{
  Child ch(29);
  cout << ch.age; // Output will be 29
  return 0;
}
