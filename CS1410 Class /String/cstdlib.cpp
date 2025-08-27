#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
{
  int num;
  num = atoi("92"); // turn string to integer
  cout << num << endl;
  float g;
  g = atof("9.81");
  cout << g << " m/s^2" << endl;
  // char intChar[12];
  // itoa(num, intChar, 8);
  // cout << intChar << endl;
  cout << stof("12.4") << endl;
  // To string function
  int number = 100;
  cout << to_string(number) << endl; // integer to string
  cout << to_string(9.81) << endl;
  // Character Testing
  if (isalpha('s'))
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }
  if (ispunct('?')) //? , . _ () { }
  {
    cout << "Yes, the character is a punctuation character " << endl;
  }
  else
  {
    cout << "No, it is not a punctuation character " << endl;
  }
  cout << "Enter any characters: ";
  char input[20];
  cin.getline(input, 20); // Read up to 19 characters and null-terminate the string

  // Check if the first character is an alphabetic character
  if (isalpha(input[0]))
  {
    cout << "The first character is alphabetic: true" << endl;
  }
  else
  {
    cout << "The first character is alphabetic: false" << endl;
  }

  // Check if the second character is a punctuation character
  if (input[1] != '\0' && ispunct(input[1]))
  { // Ensure there's a second character
    cout << "Yes, the second character is a punctuation character." << endl;
  }
  else
  {
    cout << "No, the second character is not a punctuation character." << endl;
  }
}