#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

vector <string> svec;
string word;
while (getline (cin, word))
    svec.push_back (word);

for (auto i : svec)
    cout << i << " ";

cout << endl;

vector <int> ivec;
int a;
while (cin >> a)
    ivec.push_back (a);

for (auto i : ivec)
    cout << i << " ";

cout << endl;

return 0; 

}
