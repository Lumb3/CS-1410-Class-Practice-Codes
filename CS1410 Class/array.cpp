#include <iostream>
using namespace std;
int global_array[2]; // elements initialized to 0  {0, 0}
int main()
{
  int local_array[3]; // elements will be 3 garbage values
  int initialiation[5] = {9};
  for (int k = 0; k < 5; k++)
  {
    cout << initialiation[k] << endl; // output =>  [9, 0, 0, 0, 0]
  }

  int num;
  int numbers[3] = {1, 2, 3};
  cout << numbers[2] << endl;
  cout << sizeof(numbers) << endl; // shows how many bytes in the
                                   // array [numbers]. 4bytes * 3 = 12 bytes
  for (int i = 0; i < 3; i++)
  {
    cout << numbers[i];
    if (i == 2)
    {
      cout << endl;
    }
  }

  cout << "Space" << endl;
  int n[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> n[i];
  }
  cout << "Space" << endl;
  for (int j = 4; j >= 0; j--)
  {
    cout << n[j] << endl;
  }
}
