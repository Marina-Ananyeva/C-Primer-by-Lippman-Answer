#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <cstring> 

using namespace std;

int main () {

const char s1 [] = "Hello, World";
const char s2 [] = "Hello World";

if (strcmp (s1, s2) == 0)
    cout << "s1 == s2" << endl;

if (strcmp (s1, s2) > 0)
    cout << "s1 > s2" << endl;

if (strcmp (s1, s2) < 0)
    cout << "s1 < s2" << endl;

return 0; 
}
