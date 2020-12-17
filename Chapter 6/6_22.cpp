#include <iostream>

void swap(int*& pa, int*& pb)
{
  int *temp;
  temp = pa;
  pa = pb;
  pb = temp;
}

int main () 
{
  std::cout << "Enter two numbers: ";
  int a, b;
  std::cin >> a >> b;
  int *pa = &a, *pb = &b;
  swap(pa, pb);
  std::cout << "The number are " << *pa << " and " << *pb << "." << std::endl;
  return 0;
}

