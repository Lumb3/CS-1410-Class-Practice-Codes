#include <iostream>
using namespace std;

namespace data //storage
{
  int n = 20;
  void square(int num)
  {
    cout << num * num;
  }
}
using namespace data; //emphasizes we are going to use values from 'data'
int main()
{
  cout << data::n << endl;
  data::square(2) << endl;
}