#include <iostream>
int main()
{
  std::string name = "Eric";
  std::string substr = name.substr(1, 3);
  std::cout << substr << std::endl;
  int position_to_first = name.find('E');
  if (position_to_first == std::string::npos)
  {
    std::cout << "The letter is not found." << std::endl;
  }
  else
  {
    std::cout << "The index of the letter is: " << position_to_first << std::endl;
  }
  return 0;
}