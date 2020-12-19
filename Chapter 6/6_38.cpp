#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i)
{
  return (i % 2) ? odd : even;
}

int main()
{
  int a = 5;
  for (auto c : arrPtr(a))
    std::cout << c << " ";
  std::cout << std::endl;
  return 0;
}

