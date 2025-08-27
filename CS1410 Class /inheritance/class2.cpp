#include <iostream>
class Base
{
public:
  int pub = 1;
  int return_protected_and_private_sum()
  {
    return prot + priv;
  }

protected:
  int prot = 2;
  int return_private()
  {
    return priv;
  }

private:
  int priv = 3;
};
class PubDerived : public Base
{
public:
  void show()
  {
    std::cout << pub << std::endl;
    std::cout << prot << std::endl;
    // std::cout << priv << std::endl; not gonnna work
  }
};
class ProtDerived : protected Base
{
public:
  void show()
  {
    std::cout << pub << std::endl;
    std::cout << prot << std::endl;
  }
  using Base::return_protected_and_private_sum; // Makes this function public again
  void print_private()
  {
    std::cout << "Called the private member from the base class: " << Base::return_private() << "\n";
  }
};
class PrivDerived : private Base
{
public:
  void show()
  {
    std::cout << pub << std::endl;  // ✅ now private
    std::cout << prot << std::endl; // ✅ now private
  }
};

class Animal // Method overriding
{
public:
  virtual void speak()
  {
    std::cout << "Animal sound" << std::endl;
  }
  virtual void howhow()
  {
    bark();
    std::cout << "The additional function is called in Animal class" << std::endl;
  }

protected:
  virtual void bark()
  {
    std::cout << "Animal how how" << std::endl;
  }
};

class Dog : public Animal
{
/* 
protected:
  Animal::bark();
*/
public:
  /*
  Animal::speak();
  Animal::howhow();
  */
  void speak() override
  {
    std::cout << "Woof!" << std::endl;
  }
  // Turning the protected member method into public
  using Animal::bark;
  void howhow() override
  {
    bark();
    std::cout << "The additional function is called in Dog class" << std::endl;
  }
};
int main()
{
  PubDerived d1;
  d1.show();
  ProtDerived d2;
  d2.show();
  PrivDerived d3;
  d3.show();
  // Public Direct Access
  std::cout << "Public Direct Access: " << d1.pub << std::endl;
  Base b;
  std::cout << b.return_protected_and_private_sum() << std::endl;
  std::cout << "Turned the protected member to public: " << d2.return_protected_and_private_sum() << std::endl;
  d2.print_private();

  Animal *a = new Dog(); // pointer a is pointing to the address of Dog obj
  a->speak();
  int num1 = 100;
  int num2 = 200;
  int num3 = 300;
  int *ptr1 = &num1;
  int **ptr2 = &ptr1;
  std::cout << **ptr2 << std::endl;
  int ***ptr3 = &ptr2;
  std::cout << ***ptr3 << std::endl;
  Dog *dog1 = new Dog(); // pointer dog1 is pointing to the address of Dog obj
  dog1->bark();          // dog1 --> 0x12345  (address of Dog object in heap)
  Dog *dog2 = dog1;
  dog2->bark();
  a->howhow();
  dog2->howhow();
  // Memory Reallocation
  delete dog1;
  delete a;
  return 0;
}