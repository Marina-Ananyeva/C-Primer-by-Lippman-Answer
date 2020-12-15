#include <iostream>

template <typename T>
int module(T a) 
{
  if (a >= 0)
    return (a / 1);
  else
    return (a / -1);
}

int main () 
{
  double a;
  std::cin >> a;
  std::cout << module(a) << std::endl;
  return 0;
}

