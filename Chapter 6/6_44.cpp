#include <iostream>
#include <string>

inline bool isShorter(const std::string &s1, const std::string s2)
{
  return s1.size() < s2.size();
}

int main()
{
  const std::string s1 = "Hello";
  const std::string s2 = "Hello, word!";
  std::cout << "Is string " << '"' << s1 << '"' << " shorter then "
            << "string " << '"' << s2 << '"' << "?" << std::endl;
  std::cout << "Answer (1 - true, 0 - false): " << isShorter(s1, s2) << "." << std::endl;
  return 0;
}

