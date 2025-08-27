#include <iostream>
using namespace std;
int main()
{
  int size = 3;
  int *ptr = nullptr;
  ptr = new int[size]; // pointing to the "integer" type of values, size of array is unknown
                       //  size is 20, but it can be increased or decreased
  for (int i = 0; i < size; i++)
  {
    cin >> ptr[i];
  }
  cout << "Printed values: ";
  for (int i = 0; i < size; i++)
  {
    cout << ptr[i] << " ";
  }
  cout << endl;

  size = 2; // we can change size of array by creating a new dynamic array
  int *new_arr = new int[size];
  for (int k = 0; k < 2; k++)
  {
    new_arr[k] = ptr[k];
  }
  cout << "New array with size of 4: ";
  for (int i = 0; i < 2; i++)
  {
    cout << new_arr[i] << " ";
  }
  cout << endl;
  delete[] new_arr;
  delete[] ptr;
  new_arr = nullptr;
  ptr = nullptr;

  int sarray[10] = {1, 2, 3}; // rest of the allocated spaces (7 * 4 = 28 bytes) will be
                              //  waste
  for (int i = 0; i < 3; i++)
  {
    cout << sarray[i] << " ";
  }
}
