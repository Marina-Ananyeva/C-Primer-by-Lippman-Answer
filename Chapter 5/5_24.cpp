#include <iostream>
#include <stdexcept>

int main () 
{
  int a = 0;
  int b = 0;
  
  std::cin >> a >> b;
  if (b == 0)
    throw std::runtime_error("The divisor is zero!");
  std::cout << static_cast<double>(a) / b << std::endl;

  return 0;
}

