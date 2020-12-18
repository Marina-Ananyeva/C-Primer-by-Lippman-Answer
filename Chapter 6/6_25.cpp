#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
  argc = 5;
  argv[0] = {"6_25"};
  argv[1] = {"-d"};
  argv[2] = {"-o"};
  argv[3] = {"ofile"};
  argv[4] = {"data0"};
  argv[5] = {"0"};

  std::string commandString;
  for (int i = 0; i < argc; ++i)
    commandString = commandString + argv[i] + " ";
  std::cout << commandString << std::endl;

  return 0;
}

