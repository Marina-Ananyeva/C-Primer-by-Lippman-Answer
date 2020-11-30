#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {


vector <int> ia1 {1, 2, 3, 4, 5, 6, 7};
size_t n = ia1.end () - ia1.begin ();
int ia [n];

for (auto i = 0; i < n; ++i) {
    int *p = &ia [i];
    *p = ia1 [i];
}

for (auto c : ia)
    cout << c << " ";
    
cout << endl;

return 0; 
}
