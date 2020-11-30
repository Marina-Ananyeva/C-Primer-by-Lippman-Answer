#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {

int ia [] = {1, 2, 3, 4, 5, 6, 7};
int ia1 [] = {1, 2, 3, 4, 5, 6, 7};

auto n = end (ia) - begin (ia);
auto n1 = end (ia1) - begin (ia1);
int cnt = 0;

for (auto i = 0; i < n && i < n1; ++i) {
    int *p = &ia [i];
    int *p1 = &ia1 [i];
    if (*p == *p1)
        ++cnt;
}

if (cnt == n && cnt == n1)
    cout << "ia = ia1" << endl;
    else cout << "ia != ia1" << endl;

return 0; 
}
