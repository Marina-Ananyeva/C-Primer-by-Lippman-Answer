#ifndef EX_7_9_H
#define EX_7_9_H

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

std::istream &read(std::istream &is, Person &stuff)
{
  is >> stuff.firstName >> stuff.lastName >> stuff.address;

  return is;
}
std::ostream &print(std::ostream &os, const Person &stuff)
{
  os << stuff.get_firstName() << " " << stuff.get_lastName() << " " << stuff.get_address();
  return os;
}
#endif