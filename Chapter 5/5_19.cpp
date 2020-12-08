#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{
  std::string answer;
  do
  {
    std::cout << "Enter two strings: ";
    std::string word1;
    std::string word2;
    std::cin >> word1 >> word2;
    std::cout << ((word1 > word2) ? "The second string is less." : (word1 == word2) 
                                                                 ? "Strings are equal." : "The first string is less.") 
                                                                 << std::endl;
    std::cout << "More? Enter yes or now: ";
    std::cin >> answer;
  } 
  while (!answer.empty() && answer [0] != 'n');

  return 0;
}