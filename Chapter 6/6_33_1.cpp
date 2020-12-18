#include <iostream>
#include <vector>
#include <iterator>

void print_vector(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end)
{
  if (beg != end)
  {
    std::cout << *beg << " ";
    print_vector(++beg, end);
  }
}

int main()
{
  std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int>::const_iterator beg = vi.cbegin();
  std::vector<int>::const_iterator end = vi.cend();
  print_vector(beg, end);
  std::cout << std::endl;
  return 0;
}

