#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using namespace std;

int main () {

constexpr size_t array_size = 10;
int ia [array_size];
vector <int> ia1;
for (size_t ix = 0; ix < 10; ++ix) {
    ia [ix] = ix;
    ia1.push_back (ia [ix]);
    cout << ia1 [ix]<< " ";
}
    
cout << endl;

return 0; 
}
