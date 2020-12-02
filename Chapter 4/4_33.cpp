#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main () {

int someValue;
int x = 1, y = 1;
cin >> someValue;

someValue ? ++x, ++y : --x, --y; 
//the same that: someValue ? (++x, ++y) : (--x), --y;
//correct: someValue ? (++x, ++y) : (--x, --y);

cout << x << " " << y << endl;

return 0;
}

