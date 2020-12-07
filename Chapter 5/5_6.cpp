#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main () 
{
  std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
  std::string lettergrade;
  int grade = 0;
  std::cout << "Enter your numeric grade:\n";
  while (std::cin >> grade) 
  {
    (grade < 60) ? lettergrade = scores[0] : lettergrade = scores[(grade - 50) / 10];
    lettergrade += (grade == 100 || grade < 60) ? (' ')
                                                : (grade % 10 > 7) ? ('+')
                                                                   : (grade % 10 < 3) ? ('-') : (' ');
    std::cout << "Your letter grade is" << " " << lettergrade << std::endl;
  }

  return 0;
}

