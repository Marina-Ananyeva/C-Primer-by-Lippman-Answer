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
      switch (c)
      {
        case 'a':
        case 'A':
          ++aCnt;
          break;  
        case 'e':
        case 'E':
          +eCnt;
          break;
        case 'i':
        case 'I':
          ++iCnt;
          break;
        case 'o':
        case 'O':
          ++oCnt;
          break;
        case 'u':
        case 'U':
          ++uCnt;
          break;
      }
    }
  }
  std::cout << "Number of vowel a / A:   \t" << aCnt << std::endl;
  std::cout << "Number of vowel e / E:   \t" << eCnt << std::endl;
  std::cout << "Number of vowel i / I:   \t" << iCnt << std::endl;
  std::cout << "Number of vowel o / O:   \t" << oCnt << std::endl;
  std::cout << "Number of vowel u / U:   \t" << uCnt << std::endl;
  return 0;
}
