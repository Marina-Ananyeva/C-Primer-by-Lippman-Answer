#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

vector <int> ivec;
int c;
while (cin >> c) 
    ivec.push_back (c); 

for (decltype (ivec.size ()) i = 0; i < ivec.size() - 1; ++i) {
    int a = ivec [i] + ivec [i+1];
    cout << a << " ";
}
    cout << endl;

return 0; 
}
