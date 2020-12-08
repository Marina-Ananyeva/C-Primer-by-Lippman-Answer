#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{ 
  std::vector<std::string> text;
  std::string word, wordRepeat;
  std::string textline;
  int cnt = 0, cntRepeat = 1;

  while (std::cin >> textline)
    text.push_back(textline);  
  
  for (std::size_t i = 0; i != text.size(); ++i)
  {
    word = text [i];
    for (std::size_t j = 0; j != text.size(); ++j)
      if (text [j] == word)
        ++cnt;  
    if (cnt > cntRepeat)
    {
      cntRepeat = cnt;
      wordRepeat = word;
    }
    cnt = 0;
  }  
    if (cntRepeat > 1)
      std::cout << "Word" << " " << '"' << wordRepeat << '"' << " " << "was repeated " << cntRepeat << " " << "times." << std::endl;
    else
      std::cout << "No word was repeated." << std::endl;

    return 0;
}


