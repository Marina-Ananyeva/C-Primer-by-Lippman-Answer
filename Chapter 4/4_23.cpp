#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstddef>

using namespace std;

int main () {

string s = "word";

string p1 = s + (s [s.size() - 1] == 's' ? "" : "s"); // + higher priority than ?:

cout << p1 << endl;

return 0;
}

