#include <iostream>
#include "Chapter6.h"

int fact(int a) 
{
  int factorial = 1;
  for (int i = 1; i <= a; ++i)
    factorial = factorial * i;
  return factorial;
}

void factorial_cout() 
{
  std::cout << "Enter the number: ";
  int a;
  std::cin >> a;
  std::cout << "The " << a << "! is " << fact(a) << "." << std::endl;
}