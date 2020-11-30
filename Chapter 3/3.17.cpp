#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

vector <string> svec;
string word;

getline (cin, word);

svec.push_back (word);

for (auto &c : word)
c = toupper (c);

for (auto &i : svec) {
    i = word;
    cout << i << " " << endl;
}
   
return 0; 
}
