#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using namespace std;

int main () {

int ia [] = {1, 2, 3, 4, 5, 6, 7};

for (auto c : ia) {
    int *p = &c;
    *p = 0;
    cout << c << " ";    
}

cout << endl;

return 0; 
}
