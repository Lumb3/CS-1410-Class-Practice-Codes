#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
  const int SIZE = 80;
  char arr[SIZE];
  string name;
  getline(cin, name);
  cout << "Name: " << name << endl;
  cin.getline(arr, SIZE);
  int i = 0;
  while (arr[i] != '\0') // stop at null (new line by default \n)
  {
    cout << arr[i];
    i++;
  }
  cout << endl;

  char array[SIZE];
  cin.getline(array, SIZE, 'l'); // Stops at the character 'l'
  cout << array << endl;
  char destination[SIZE];
  strcpy(destination, array);
  cout << destination << endl;

  char charaters[10] = {'a', 'b', 'c', 'd'};
  cout << charaters << endl; //only works in characters
  return 0;
}