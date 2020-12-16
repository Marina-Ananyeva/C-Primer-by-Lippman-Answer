#include <iostream>

void change(int &a, int &b)
{
  int temp = 0;
  temp = a;
  a = b;
  b = temp;
}

int main () 
{
  int i = 10, j = 20;
  change(i, j);
  std::cout << "i = " << i << ", j = " << j << std::endl;
  return 0;
}

