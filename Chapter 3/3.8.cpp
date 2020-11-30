#include <iostream>
#include <string>

using namespace std;

int main () {

string line;
getline (cin, line);
for (decltype (line.size ()) i = 0; i < line.size (); ++i)
    line [i] = 'X';
cout << line << endl;

return 0;

}
