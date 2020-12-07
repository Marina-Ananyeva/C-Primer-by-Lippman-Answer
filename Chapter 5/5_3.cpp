#include <iostream>

int main () 
{
  int val = 0;

  int sum = 0;

  while (++val, val <= 10)
  sum += val;

  return 0;
}

