#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstddef>


int main () {
std::string s ("hello");
std::string::iterator iter = s.begin();// variable inside the control structure must be initialized

while (iter != s.end())
{
  *iter = toupper(*iter);
  std::cout << *iter;
  ++iter;
}
std::cout << std::endl;

return 0;
}


