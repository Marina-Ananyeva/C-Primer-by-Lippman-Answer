#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using namespace std;

int main () {

vector <int> ia = {1, 2, 3, 4, 5, 6, 7};
vector <int> ia1 = {1, 2, 3, 4, 5, 6, 7};

auto n = ia.end () - ia.begin ();
auto n1 = ia1.end () - ia1.begin ();
int cnt = 0;

for (auto i = 0; i < n && i < n1; ++i) {
    if (ia [i] == ia1 [i])
        ++cnt;
}

if (cnt == n && cnt == n1)
    cout << "ia = ia1" << endl;
    else cout << "ia != ia1" << endl;

return 0; 
}
