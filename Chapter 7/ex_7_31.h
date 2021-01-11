#ifndef EX_7_31_H
#define EX_7_31_H

#include <iostream>
#include <string>

class X 
{
  class Y *p1 = nullptr;
};

class Y 
{
  class X obj1;
};

#endif
