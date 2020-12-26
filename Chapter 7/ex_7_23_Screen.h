#ifndef EX_7_23_SCREEN_H
#define EX_7_23_SCREEN_H

#include <iostream>
#include <string>

class Screen 
{
  public:
    void some_member() const;
  private:
    mutable size_t access_ctr;
  public:
    typedef std::string::size_type pos; //equivalent using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    char get() const { return contents[cursor]; };
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
  private:
    pos cursor = 0;       //position of cursor
    pos height = 0;       //height of screen
    pos width = 0;        //width of screen
    std::string contents; //screen's contents
};

void Screen::some_member() const
{
  ++access_ctr;
}
inline Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}
char Screen::get(pos r, pos c) const{
  pos row = r * width;
  return contents[row + c];
}
#endif
