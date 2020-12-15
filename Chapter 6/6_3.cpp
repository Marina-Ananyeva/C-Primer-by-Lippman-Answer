#include <iostream>

int fact(int a) 
{
  int factorial = 1;
  for (int i = 1; i <= a; ++i)
    factorial = factorial * i;
  return factorial;
}

int main () 
{ 
  return 0;
}

