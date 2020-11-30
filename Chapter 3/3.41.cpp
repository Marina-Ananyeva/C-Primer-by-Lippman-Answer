#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {

int ia [] = {1, 2, 3, 4, 5, 6, 7};
vector <int> ia1 (begin (ia), end (ia));

for (auto c : ia1)
    cout << c << " ";
    
cout << endl;

return 0; 
}
