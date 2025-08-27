#include <iostream>
using namespace std;
int main()
{
  int array[3] = {10, 20, 30};
  for (int &i : array) // for accessing every elements of the array
  {
    cout << i << " ";
  }
  cout << endl;
  cout << "Next" << endl;
  int marks[6];
  for (int &val : marks)
  {
    cin >> val;
  }
  for (int val : marks)
  {
    cout << val << " ";
  }
  cout << endl;
  // int mark[6++] = {45}; //7th index is 45
  // int mark [6] ++; // increment the mark[6] by 1
  for (int i : marks)
  {
    i = i + 1; //increment every elements of an array
    cout << i << " ";
  }
  cout << endl;
}