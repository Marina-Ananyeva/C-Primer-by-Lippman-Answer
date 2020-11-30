#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using namespace std;

int main () {

int ia [] = {0, 1, 2, 3, 4, 5, 6};
int *p1 = &ia[0];
int *p2 = &ia[6];
cout << *p1 << " " << *p2 << endl;
p1 += p2 - p1;
cout << *p1 << " " << *p2 << endl;

for (auto c : ia)
cout << c << " ";
    
cout << endl;

return 0; 
}
