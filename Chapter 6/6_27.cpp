#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> const &li)
{
  int sum = 0;
  for (auto &c : li)
    sum += c;
  return sum;
}

int main()
{
  std::initializer_list<int> i = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::cout << sum(i) << std::endl;

  return 0;
}

