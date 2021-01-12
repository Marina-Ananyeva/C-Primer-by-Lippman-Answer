#ifndef EX_7_35_H
#define EX_7_35_H

#include <iostream>
#include <string>
#include <vector>

typedef std::string Type;
Type initVal();

class Exercise
{
public:
  typedef double Type;
  Type setVal(Type);
  Type initVal();
private:
  int val;
};

Exercise::Type Exercise::setVal (Type parm)
{
  val = parm + initVal();
  return val;
}
#endif
