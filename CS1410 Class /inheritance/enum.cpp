#include <iostream>
enum Color
{        // enum => user-defined type, allows you to give names to integer constants
  RED,   // 0
  GREEN, // 1
  BLUE   // 2
};

enum Day
{         // My data type
  Sunday, // {name: val(0)}
  Monday, // {name: val(1)}
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};
// enum Class
enum class TrafficLight{
  RED,
  YELLOW,
  GREEN
};
int main()
{
  typedef int NUM;
  NUM a = 10;
  Color c = RED;
  std::cout << c << std::endl;
  Day today = Sunday;
  switch (today)
  {
  case 0:
    std::cout << "Today is Sunday" << std::endl;
    break;
  case 1:
    std::cout << "Today is Monday" << std::endl;
    break;
  case 2:
    std::cout << "Today is Tuesday" << std::endl;
    break;
  case 3:
    std::cout << "Today is Wednesday" << std::endl;
    break;
  case 4:
    std::cout << "Today is Thursday" << std::endl;
    break;
  case 5:
    std::cout << "Today is Friday" << std::endl;
    break;
  case 6:
    std::cout << "Today is Saturday" << std::endl;
  }

  TrafficLight t = TrafficLight::GREEN;
  if (t == TrafficLight::GREEN) {
    std::cout << "Green light. You may go!" << std::endl;
  }
  int today2 = static_cast<int>(today);
  std::cout << today2 << std::endl;
  return 0;
}