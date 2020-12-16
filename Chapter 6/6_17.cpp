#include <iostream>
#include <string>
#include <cctype>

bool capitalLetter(const std::string &s)
{
  bool flag = false;
  for (auto c : s)
    if (isupper(c))
      return true;
    return false;
}

void smallLetter(std::string &s)
{
  for (auto &c : s)
    c = tolower(c);
}

int main () 
{
  std::string s;
  std::cout << "Enter a string: " << std::endl;
  getline (std::cin, s);
  std::cout << (capitalLetter(s) == true ? "String contains capital letter." : "String doesn't contain any capital letters.") 
  << std::endl;
  smallLetter(s);
  std::cout << s << std::endl;
  return 0;
}

