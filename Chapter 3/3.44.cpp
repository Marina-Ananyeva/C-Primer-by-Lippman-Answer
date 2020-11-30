#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {


int ia [3] [4] = {{0, 1, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

using int_array = int [4];
using int_int = int;
for (int_array  &row : ia) {
    for (int_int col : row)
        cout << col << "\t";
    cout << endl;
}
    
return 0; 
}
