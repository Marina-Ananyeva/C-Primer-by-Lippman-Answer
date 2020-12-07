#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{
  char ch;
  std::vector<char> text;
  int cnt = 0;
  while (std::cin >> std::noskipws >> ch)
    text.push_back(ch);
    
  for (std::size_t i = 0; i != text.size(); ++i)
  {
    if (text[i] == 'f' && ((text[i + 1] == 'f') || (text[i + 1] == 'l') || (text[i + 1] == 'i')))
      ++cnt;
  }
  std::cout << "Number of combinations:   \t" << cnt << std::endl;
  
  return 0;
}


