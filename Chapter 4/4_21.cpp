#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstddef>

using namespace std;

int main () {

int i;
vector <int> vec;

while (cin >> i) 
    vec.push_back (i);
    
for (auto c : vec) {
    (c % 2 == 0) ? (c) : (c = c * 2);
    cout << c << " ";
}
cout << endl;    

return 0;
}

