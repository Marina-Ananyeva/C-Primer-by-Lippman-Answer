#include <iostream>
#include <string>

int main(int argc, const char **argv)
{
  argc = 5;
  argv[0] = {"6_26"};
  argv[1] = {"-d"};
  argv[2] = {"-o"};
  argv[3] = {"ofile"};
  argv[4] = {"data0"};
  argv[5] = {"0"};

  std::cout << "The first argument is: " << argc << std::endl;
  std::cout << "The second argument is: ";
  for (int i = 0; i < argc; ++i)
    std::cout << argv[i] << " ";
  std::cout << std::endl;

  return 0;
}

