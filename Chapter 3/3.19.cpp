#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

vector <int> ivec1 (10, 42);
for (auto i : ivec1)
    cout << i << " ";
    cout << endl;

vector <int> ivec2 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
for (auto i : ivec2)
    cout << i << " ";
    cout << endl;

vector <int> ivec3;
int c = 42;
for (decltype (ivec3.size ()) i = 0; i < 10; ++i) 
    ivec3.push_back (c);    
for (auto i : ivec3)
    cout << i << " ";
    cout << endl;

vector <int> ivec4;
int d = 42;
for (int i = 0; i < 10; ++i)
    ivec4.push_back (d);

for (auto i : ivec4)
    cout << i << " ";
    cout << endl;

return 0; 
}
