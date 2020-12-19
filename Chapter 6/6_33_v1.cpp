#include <iostream>
#include <vector>

void print_vector(std::vector<int> &vic, int &i, int &j)
{
  if (i < j)
  {
    std::cout << vic[i] << " ";
    i++;
    print_vector(vic, i, j);
  }
}

int main()
{
  std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int a = 0;
  auto size = vi.size();
  int b = size;
  print_vector(vi, a, b);
  std::cout << std::endl;
  return 0;
}

