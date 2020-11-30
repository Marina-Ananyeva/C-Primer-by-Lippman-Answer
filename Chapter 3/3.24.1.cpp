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
auto mid = beg + (end - beg) / 2;
int i = 1;

for (auto it = beg; it != mid; ++it) { 
    int a = *it;
    int b = *(end - i);
    int c  = a + b; 
    ++i;
    cout << c << " ";    
}
    
cout << endl;

return 0; 
}
