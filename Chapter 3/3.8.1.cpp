#include <iostream>
#include <string>

using namespace std;

int main () {

string line;
getline (cin, line);
decltype (line.size ()) i = 0;
while (i < line.size ()) {
    line [i] = 'X';
    ++i;
}
    
cout << line << endl;

return 0;

}
