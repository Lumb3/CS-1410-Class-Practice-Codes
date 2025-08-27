#include <iostream>
using namespace std;
int main()
{
  int arr[3][3] = {0};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  int row, column, new_value;
  cout << "Enter row: ";
  cin >> row;
  row -= 1;
  cout << "Enter column: ";
  cin >> column;
  column -= 1;
  cout << "Enter new value: ";
  cin >> new_value;
  if (row >= 0 && row <= 3 && column >= 0 && column <= 3)
  {
    arr[row][column] = new_value; // arr[1] [2] = 10
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}