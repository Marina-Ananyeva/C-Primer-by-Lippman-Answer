#ifndef EX_7_27_SCREEN_H
#define EX_7_27_SCREEN_H

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
    Screen(pos ht, pos wd, std::string s);
    char get() const { return contents[cursor]; };
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os) { do_display(os);  return *this; }
    const Screen &display(std::ostream &os) const { do_display(os); return *this; }

  private:
    void do_display(std::ostream &os) const { os << contents; }
    pos cursor = 0;       //position of cursor
    pos height = 0;       //height of screen
    pos width = 0;        //width of screen
    std::string contents; //screen's contents
};

Screen::Screen(pos ht, pos wd, std::string s) : height(ht), width(wd), contents(s)
{
  int space_cnt = 0;
  std::cin >> space_cnt;
  for (int i = 0; i < space_cnt; ++i)
    s[i] = ' ';
}
void Screen::some_member() const
{
  ++access_ctr;
}
char Screen::get(pos r, pos c) const{
  pos row = r * width;
  return contents[row + c];
}
inline Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}
inline Screen &Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch)
{
  contents[r * width + col] = ch;
  return *this;
}
#endif
