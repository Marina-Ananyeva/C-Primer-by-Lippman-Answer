#include <iostream>

int factorial(int a) 
{
  int fact = 1;
  for (int i = 1; i <= a; ++i)
    fact = fact * i;
  return fact;
}

void factorial_cout() 
{
  std::cout << "Enter the number: ";
  int a;
  std::cin >> a;
  std::cout << "The " << a << "! is " << factorial(a) << "." << std::endl;
}

int main () 
{
  factorial_cout();
  return 0;
}