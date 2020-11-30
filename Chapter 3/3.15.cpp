#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
vector <string> svec;
string word;
while (getline (cin, word))
    svec.push_back (word);

/*while (cin >> word)
    svec.push_back (word);*/

return 0;

}
