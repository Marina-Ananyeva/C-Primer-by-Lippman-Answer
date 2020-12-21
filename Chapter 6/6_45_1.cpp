#include <iostream>
#include <string>

inline std::string make_plural(size_t ctr, const std::string &word, const std::string ending = "s")
{
  return (ctr > 1) ? word + ending : word;
}

int main()
{
  std::string s1 = "success";
  std::cout << "Plural of " << s1 << " - " << make_plural(2, s1, "es") << "." << std::endl;
  std::string s2 = "failure";
  std::cout << "Plural of " << s2 << " - " << make_plural(2, s2) << "." << std::endl;
  
  return 0;
}

