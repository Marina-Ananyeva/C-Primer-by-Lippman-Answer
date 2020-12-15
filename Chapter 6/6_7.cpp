#include <iostream>

size_t number_calls() 
{
  static size_t i = 0;
  return i++;
}

int main () 
{
  for (size_t j = 0; j < 5; ++j)
    std::cout << number_calls() << std::endl;
  return 0;
}

