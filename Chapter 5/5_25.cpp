#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

int main () 
{
  int a = 0;
  int b = 0;
  std::cout << "Enter two numbers: " << std::endl;
  while (std::cin >> a >> b)
  { 
    try
    {
      if (b == 0)
      throw std::runtime_error("The divisor is zero!");
      std::cout << static_cast<double>(a) / b << std::endl;
      std::cout << "Enter two numbers: " << std::endl;
    }
    catch(std::runtime_error err)
    {
      std::cout << err.what() << "\nTry again? Enter 'yes' or 'no'" << std::endl;
      std::string c;
      std::cin >> c;
      if (!std::cin || c [0] == 'n')
        break;
      else
        std::cout << "Enter two numbers: " << std::endl;
    }
  }
  return 0;
}

