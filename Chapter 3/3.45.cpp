#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {


int ia [3] [4] = {{0, 1, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

for (const auto  &row : ia) {
    for (auto col : row)
        cout << col << "\t";
    cout << endl;
}
    
return 0; 
}

