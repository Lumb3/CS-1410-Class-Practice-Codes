#include <iostream>
using namespace std;

int factorial(int *x)
{
  if (*x == 1 || *x == 0)
  {
    return 1;
  }
  else
  {
    int var = *x - 1;
    return *x * factorial(&var);
  }
}

int fibonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive
  }
}

int main()
{
  int y = 3;
  int d = factorial(&y);
  cout << d << endl;
  int fib = 4; // 0, 1, 1, 2, 3
  int f = fibonacci(fib);
  cout << f << endl;
}