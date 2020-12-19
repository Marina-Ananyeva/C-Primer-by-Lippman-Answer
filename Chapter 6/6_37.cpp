#include <iostream>
#include <string>

std::string (&arrString(std::string))[10];

using arrS_t = std::string[10]; // or typedef std::string arrS_t[10];
arrS_t &arrString(std::string);

auto arrString(std::string) -> std::string (&)[10];

std::string text[10];
decltype (text) &arrString(std::string);

int main()
{
  return 0;
}

