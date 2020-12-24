#ifndef EX_7_15_PERSON_H
#define EX_7_15_PERSON_H

#include <iostream>
#include <string>

struct Person 
{
  Person() = default;
  Person(const std::string &sfirstName, const std::string &slastName, const std::string &saddress) : 
  firstName(sfirstName), lastName(slastName), address(saddress) {}
  Person(std::istream &is) { read(is, *this); }

  std::string firstName;
  std::string lastName;
  std::string address;
  
  std::string get_firstName() const { return firstName; }
  std::string get_lastName() const { return lastName; }
  std::string get_address() const { return address; }
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