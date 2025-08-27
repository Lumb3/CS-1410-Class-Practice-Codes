#include <iostream>
using namespace std;
int main (){
  //A pointer is a variable that stores the "memory address" of another variable. 
  int num = 10;
  int *ptr; //Can be declared without initialization	
  ptr = &num;
  *ptr = 20; //changing the value of the [pts]'s accessed value
  //*ptr = NULL     pointer can be NULL
  cout << *ptr << endl;
}