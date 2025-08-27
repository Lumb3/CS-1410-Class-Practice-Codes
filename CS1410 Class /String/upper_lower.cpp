#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
  char ch = 's';
  cout << static_cast<char>(toupper(ch)) << endl;
  string movieTitle;
  movieTitle = "Wheels of Fury";
  cout << "My favorite movie: " << movieTitle << endl;
  string firstname;
  getline(cin, firstname); // operational except [char]
  cout << "Output the value using getline in string: " << firstname << endl;
  const int size = 20;
  char array[size];
  cin.getline(array, size);
  cout << "Output the value using C-style string" << array << endl;
  cout << movieTitle + firstname << endl;
  string word1, phrase;
  cin >> word1;
  getline (cin, phrase);
  cout << "word1: " << word1 << endl;
  cout << "phrase: " << phrase << endl;
  string kk = "Hi zaluu";
  cout << kk << endl;
}