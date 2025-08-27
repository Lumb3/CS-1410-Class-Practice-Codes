#include <iostream>
using namespace std;

int add2(int num1, int num2){
  return num1 + num2;
}
float add2 (float num1, float num2) { //main differences must be number/type of the functions
  return num1 + num2;
}
int main (){
  int a = 2; int b = 3;
  float l = 3.21; float o = 91.23;
  int var1 = add2(a, b); // the arguments that are assigned are different from the var2.
  float var2 = add2 (l, o); //but the function name can be same
  cout << var1 << endl;
  cout << var2 << endl;
}