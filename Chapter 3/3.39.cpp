#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {

string s1;
string s2;
getline (cin, s1);
getline (cin, s2);

if (s1 == s2)
    cout << "s1 == s2" << endl;

if (s1 > s2)
    cout << "s1 > s2" << endl;

if (s1 < s2)
    cout << "s1 < s2" << endl;

return 0; 
}
