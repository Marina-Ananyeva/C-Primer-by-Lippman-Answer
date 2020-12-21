#include <iostream>

inline int compare(const int i, const int *pa)
{
  return i > *pa ? i : *pa;
}

int main () 
{
  std::cout << "Enter two numbers: ";
  int a, b;
  std::cin >> a >> b;
  std::cout << "The larger is " << compare(a, &b) << "." << std::endl;
  return 0;
}

