#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{ 
  std::vector<int> ivec{0, 1, 1, 2};
  std::vector<int> ivec1{0, 1, 1, 2, 3, 5, 8};
  int cnt = 0;

  for (std::size_t i = 0; (i != ivec.size()) && (i != ivec1.size()); ++i)
    if (ivec [i] == ivec1 [i])
      ++cnt;
  
  std::cout << ((cnt == ivec.size()) ? "yes" : (cnt == ivec1.size()) 
                                             ? "yes" : "no") << std::endl;

  return 0;
}