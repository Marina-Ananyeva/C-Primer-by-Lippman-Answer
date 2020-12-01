#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

int ival = 1;
int *ptr = &ival;
vector <int> vec {1, 2, 3, 4};


if (ptr != 0 && *ptr++) // a
    cout << 1 << endl;
else 
    cout << 0 << endl;

if (ival++ && ival) // b
    cout << 1 << endl;
else 
    cout << 0 << endl;

if (vec [ival ++] <= vec [ival]) // c variant: if (vec [ival] <= vec [ival++]) or (vec [ival+1] <= vec [ival])
    cout << 1 << endl;
else 
    cout << 0 << endl;

return 0; 
}

