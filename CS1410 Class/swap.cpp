#include <iostream>
using namespace std;
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  cout << a << endl;
  cout << b << endl;
}
int main()
{
  int num1, num2;
  cout << "Enter the numbers: ";
  cin >> num1 >> num2;
  swap(num1, num2);
}