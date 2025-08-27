#include <iostream>
using namespace std;

class base
{
private:
  int age;

protected:
  int x;

public:
  void assign()
  {
    x = 100;
  }
  void accessor()
  {
    age = 100;
    cout << age << " years old" << endl;
  }
};

class ECEstudents : public base
{
public:
  void change()
  {
    x = 200; // protected
  }
  void print()
  {
    cout << x << endl;
    base::accessor();
  }
};

class Derived : protected base
{
public:
  void output()
  {
    // Call assign() to modify x, then print x
    assign();          //(protected)         // assign() can be called within the class
    cout << x << endl; // (protected)   Access x, as it's protected in Derived
  }
};
class Derived2 : protected Derived // Child's child class
{
public:
  void idk()
  {
    assign();
    cout << x << endl;
  }
};

int main()
{
  ECEstudents in;
  in.change();
  in.print(); // Should print 200

  Derived dt;
  dt.output(); // Should print 100, as assign() sets x to 100
  Derived2 d;
  d.idk();
  return 0;
}
