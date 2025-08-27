#include <iostream>
using namespace std;


void reverse(int array[], int size, int answer[]) {
  for (int i = 0, j = size - 1; i < size; i++, j--) {
    answer[j] = array[i];
  }
}

int main() {
  int array[5];  
  int reversed[5];  
  
  cout << "Enter 5 numbers: ";
  for (int i = 0; i < 5; i++) {
    cin >> array[i];
  }

  reverse(array, 5, reversed);

  cout << "Reversed array: ";
  for (int i = 0; i < 5; i++) {
    cout << reversed[i] << " ";
  }

  return 0;
}
