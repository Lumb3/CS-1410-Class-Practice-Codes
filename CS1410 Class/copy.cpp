#include <iostream>
using namespace std;
int main () {
  const int size = 5;
  int array[size] = {1, 2, 3, 4, 5};
  int array_1[size];
  for (int i = 0; i < size; i++){
    array_1[i] = array[i];
  }
  for (int i = 0; i < size; i++) {
    cout << array_1[i] << " ";
  }
  cout << endl;
}