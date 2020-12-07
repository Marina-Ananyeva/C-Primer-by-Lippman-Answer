#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{
  char ch;
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt =0, tabCnt = 0, nCnt = 0; 
  while (std::cin >> std::noskipws >> ch)
  {
    if (ch == 'a' || ch == 'A')
      ++aCnt;
    if (ch == 'e' || ch == 'E')
      ++eCnt;
    if (ch == 'i' || ch == 'I')
      ++iCnt;
    if (ch == 'o' || ch == 'O')
      ++oCnt;
    if (ch == 'u' || ch == 'U')
      ++uCnt;
    if (ch == ' ')
      ++spaceCnt;
    if (ch == '\t')
      ++tabCnt;
    if (ch == '\n')
      ++nCnt;   
  }

  std::cout << "Number of vowel a / A:   \t" << aCnt << std::endl;
  std::cout << "Number of vowel e / E:   \t" << eCnt << std::endl;
  std::cout << "Number of vowel i / I:   \t" << iCnt << std::endl;
  std::cout << "Number of vowel o / O:   \t" << oCnt << std::endl;
  std::cout << "Number of vowel u / U:   \t" << uCnt << std::endl;
  std::cout << "Number of spaces:        \t" << spaceCnt << std::endl;
  std::cout << "Number of tab char:      \t" << tabCnt << std::endl;
  std::cout << "Number of newlines:      \t" << nCnt << std::endl;
  return 0;
}


