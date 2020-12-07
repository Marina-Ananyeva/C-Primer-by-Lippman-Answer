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
  if (grade == 100)
      lettergrade = scores[5];  
      else if (grade >= 90 && grade < 100)
        lettergrade = scores[4];
        else if (grade >= 80 && grade < 90)
          lettergrade = scores[3];
          else if (grade >= 70 && grade < 80)
            lettergrade = scores[2];
            else if (grade >= 60 && grade < 70)
            lettergrade = scores[1];
            else 
              lettergrade = scores[0];
  if (grade % 10 > 7 && grade != 100 && grade >= 60)
    lettergrade += '+';
  if (grade % 10 < 3 && grade != 100 && grade >= 60)
    lettergrade += '-';
  std::cout << "Your letter grade is" << " " << lettergrade << std::endl;
  }
  
  return 0;
}


