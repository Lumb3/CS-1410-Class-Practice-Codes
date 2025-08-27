#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // Fixed Sie {Arrays} (cannot be changed or modified)
  int arr[5] = {1, 2, 3, 4}; // [int] –> Data type of values
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << " ";
    if (i == 3)
    {
      cout << endl;
    }
  }
  // Omit Elements on Decleration
  string cars[3]; // 3 arrays are there (index)
  cars[0] = "BMW";
  cars[1] = "Posche";
  cars[2] = "Hyundai";
  int values = 0;
  while (values < 3)
  {
    cout << cars[values] << ", ";
    if (values == 2)
    {
      cout << endl;
    }
    values++;
  }
  // //For-each loop
  // for (int i: arr){
  //   cout << i;
  // }

  // //Dynamic Size {Vectors} (Can be changed or modified)
  // vector <int> numbers = {1, 2, 3, 4, 5};
  // numbers.push_back(6);
}