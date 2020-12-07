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
      if (c == 'a' || c == 'A')
        ++aCnt;  
      if (c == 'e'|| c == 'E')
        +eCnt;  
      if (c == 'i'|| c == 'I')
        ++iCnt;  
      if (c == 'o'|| c == 'O')
        ++oCnt;  
      if (c == 'u'|| c == 'U')
        ++uCnt;  
      }
    }
  std::cout << "Number of vowel a / A:   \t" << aCnt << std::endl;
  std::cout << "Number of vowel e / E:   \t" << eCnt << std::endl;
  std::cout << "Number of vowel i / I:   \t" << iCnt << std::endl;
  std::cout << "Number of vowel o / O:   \t" << oCnt << std::endl;
  std::cout << "Number of vowel u / U:   \t" << uCnt << std::endl;
  return 0;
}


