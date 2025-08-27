#include <iostream>
using namespace std;
class base
{
protected:
  string name;
  int age;

public:
  base()
  {
    name = "Lee Seung Taek";
    age = 24;
  }
  void help()
  {
    cout << name << " " << age << " years old." << endl;
  }
};
class derived : private base
{
public:
  void print_info()
  {
    help(); //private property
  }
};
int main (){
  derived dt;
  dt.print_info();
}