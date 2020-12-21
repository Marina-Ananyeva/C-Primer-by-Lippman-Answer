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
  std::vector<int (*)(int, int)> vi;
  int a, b;
  std::cout << "Enter two number: " << std::endl;
  std::cin >> a >> b;
  int (*p_add)(int, int) = add;
  int (*p_subtract)(int, int) = subtract;
  int (*p_multiply)(int, int) = multiply;
  int (*p_divide)(int, int) = divide;

  vi = {p_add, p_subtract, p_multiply, p_divide};
 
  for (int i = 0; i < 4; ++i)
  {
    int c = vi[i](a, b);
    std::cout << c << " ";
  }
  std::cout << std::endl;
  return 0;
}

