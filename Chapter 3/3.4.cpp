#include <iostream>
#include <string>

using namespace std;


int main () {

string line;
string line1;

getline (cin, line);
getline (cin, line1); 

if (line == line1)
    cout << line << " = " << line1 << endl;
else {
    if (line > line1)
        cout << line << " > " << line1 << endl;
    else cout << line << " < " << line1 << endl;
}

return 0;

}
