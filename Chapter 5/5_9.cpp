#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{
  std::string text;
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0; 
  while (getline(std::cin, text))
  {
    for (auto c : text)
    {
      if (c == 'a')
        ++aCnt;  
      if (c == 'e')
        +eCnt;  
      if (c == 'i')
        ++iCnt;  
      if (c == 'o')
        ++oCnt;  
      if (c == 'u')
        ++uCnt;  
      }
    }
  std::cout << "Number of vowel a:   \t" << aCnt << std::endl;
  std::cout << "Number of vowel e:   \t" << eCnt << std::endl;
  std::cout << "Number of vowel i:   \t" << iCnt << std::endl;
  std::cout << "Number of vowel o:   \t" << oCnt << std::endl;
  std::cout << "Number of vowel u:   \t" << uCnt << std::endl;
  return 0;
}


