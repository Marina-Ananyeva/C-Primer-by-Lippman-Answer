#ifndef EX_7_40_H
#define EX_7_40_H

#include <iostream>
#include <string>

struct Employee 
{
public:
  Employee() = default;
  Employee(const std::string &sfirstName, const std::string &slastName, const std::string &saddress) : 
  firstName(sfirstName), lastName(slastName), address(saddress) {}
  Employee(std::istream &is) { is >> firstName >> lastName >> address; }

  std::string get_firstName() const { return firstName; }
  std::string get_lastName() const { return lastName; }
  std::string get_address() const { return address; }

  private:
  std::string firstName;
  std::string lastName;
  std::string address;
};

#endif