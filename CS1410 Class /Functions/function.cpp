#include <iostream>
using namespace std;

int num(int &a, int &b)
{ //[a] and [b] are arguments
  int d = a + b;
  return d;
}
int c; //global variable
int add(int x, int y)
{
  c = x + y; //doesn't need to declare a local variable
  return c; //return the global variable
}

int main()
{
  int n1 = 5;
  int n2 = 10;
  int var = num(n1, n2); //[n1] and [n2] are parameters
  cout << var << endl;
  int c = 10; //local variable [c]
  cout << add(3, 4) << endl;
  cout << c << endl; //prints the local variable [c]
} 