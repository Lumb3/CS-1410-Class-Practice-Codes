#include <iostream>
using namespace std;

void increment(int num[], int size)
{
  for (int i = 0; i < size; i++)
  {
    num[i]++;
    cout << num[i] << " ";
  }
  cout << endl;
  cout << "Size of num: " << num << endl;
}

int main()
{
  int array[] = {10, 20, 30};
  increment(array, 3); //passing through pointer
  cout << "Address of array: " << array << endl; // address of array
}