#include <iostream>
// static_cast => Compile Time casting (faster)
// dynamic cast => A runtime cast, returns nullptr is failed (slower)
class Base
{
public:
  virtual void show()
  {
    std::cout << "Base class" << "\n";
  }
};
class Derived : public Base
{
public:
  void show() override
  {
    std::cout << "Derived class" << "\n";
  }
};

class Product
{
public:
  virtual ~Product() = default; // Polymorphic class
  inline void test_function() {
    std::cout << "HI, this is the test function." << std::endl;
  }
};
class Electronics : public Product
{
public:
  Electronics()
  {
    std::cout << "Electronics created" << std::endl;
  }
  using Product::test_function; // Use the test_function as public
  
};
int main()
{
  Base *b = new Derived();
  Derived *derivedPtr = static_cast<Derived *>(b); // Downcasting (not safe)
  derivedPtr->show();
  b->show();

  Base *basePtr = static_cast<Base *>(derivedPtr); // Upcasting (safe)
  basePtr->show();

  Product *productPtr = new Electronics();
  Electronics *electronicsPtr = dynamic_cast<Electronics *>(productPtr);
  if (electronicsPtr) // returns nullptr is fails
  {
    std::cout << "dynamic_cast succeeded\n";
  }
  else
  {
    std::cout << "dynamic_cast failed\n";
  }
  Product *invalidProductPtr = new Product(); // failed case because this pointer is not pointing to Electronics obj
  Electronics *e = dynamic_cast<Electronics *>(invalidProductPtr);
  if (e)
  {
    std::cout << "casting is successful\n";
  }
  else
  {
    std::cout << "casting is unsuccessful\n";
  }
  std::cout << 9 / 10 << std::endl;
  // Memory reallocation
  delete electronicsPtr;
  delete e;
  delete basePtr;
  return 0;
}