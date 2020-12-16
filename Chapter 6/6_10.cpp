#include <iostream>

void change(int *pa, int *pb)
{
  int temp = 0;
  temp = *pa;
  *pa = *pb;
  *pb = temp;
}

int main () 
{
  int i = 10, j = 20;
  change(&i, &j);
  std::cout << "i = " << i << ", j = " << j << std::endl;
  return 0;
}

