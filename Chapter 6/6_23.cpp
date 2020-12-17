#include <iostream>
#include <string>
#include <vector>
#include <iterator>

void print(const int* a)
{
  std::cout << *a << std::endl;
}

void print(const char *ch)
{
  if (ch)
    while (*ch)
      std::cout << *ch++;
  std::cout << std::endl;
}

void print(const int *beg, const int *end)
{
  for (; beg != end; ++beg)
    std::cout << *beg << " ";
  std::cout << std::endl;
}

void print(const int arr[], size_t size)// equivalent const int *arr
{
  for (size_t i = 0; i != size; ++i)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}

void print(int (&arr)[2])
{
  for (auto i : arr)
    std::cout << i << " ";
  std::cout << std::endl;
}

int main()
{
  int i = 0, j[2] = {0, 1};
  print(&i);
  print(std::begin(j), std::end(j));
  print(j, std::end(j) - std::begin(j));
  print(j);

  return 0;
}

