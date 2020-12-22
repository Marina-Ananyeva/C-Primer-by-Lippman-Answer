#ifndef EX_7_5_H
#define EX_7_5_H

#include <iostream>
#include <string>

struct Person 
{
  std::string firstName;
  std::string lastName;
  std::string address;
  std::string get_firstName() const
  {
    return firstName;
  }
std::string get_lastName() const
  {
    return lastName;
  }
std::string get_address() const
  {
    return address;
  }
};

#endif