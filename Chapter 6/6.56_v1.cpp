#include <iostream>
#include <string>
#include <vector>

inline int add(int i, int j)
{
  return i + j;
}

inline int subtract(int i, int j)
{
  return i - j;
}

inline int multiply(int i, int j)
{
  return i * j;
}

inline int divide(int i, int j)
{
  return (j != 0) ? (i / j) : 0;
}

int main()
{
  int a, b;
  std::cout << "Enter two number: " << std::endl; 
  std::cin >> a >> b;
  std::vector<int (*)(int, int)> vi = {add, subtract, multiply, divide};
  for (auto c : vi)
    std::cout << c (a, b) << " ";
  std::cout << std::endl;
  return 0;
}

