#include <iostream>
#include "Sales_data.h"
#include "Sales_data.cpp"

int main()
{
  Sales_data total(std::cin);
  if (std::cin)
  {
    while (std::cin)
    {
      Sales_data trans(std::cin);
      if (total.isbn() == trans.isbn())
      {
        total = add(total, trans);
      }
      else
      {
        print(std::cout, total) << std::endl;
        total = trans;
      }
    }
    print(std::cout, total) << std::endl;
  }
  else 
  {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}
