#include <iostream>

void f()
{
  std::cout << " " << std::endl;
}
void f(int a)
{
  std::cout << a << std::endl;
}
void f(int a, int b)
{
  std::cout << a << " " << b << std::endl;
}
void f(double a, double b = 3.14)
{
  std::cout << a << " " << b << std::endl;
}

int main()
{
  //f(2.56, 42); //f(double, int) is ambiguous: void f(int, int); void f(double, double = 3.14);
  f(42);
  f(42, 0);
  f(2.56, 3.14);
  return 0;
}

