#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

vector <int> ivec;
int c;
while (cin >> c) 
    ivec.push_back (c); 

auto beg = ivec.begin ();
auto end = ivec.end ();

int a = 0, b = 0;

for (auto it = beg; it != end - 1; ++it) {
    int a = *it;
    int b = ++*it;
    int c  = a + b;

    cout << c << " ";
}
    cout << endl;

return 0; 
}
