#include <iostream>
using namespace std;

int main()
{
    int i = 1, &r1 = i;
    double d = 2, &r2 = d;
    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;

    cout <<  i << " " << r1 << " " << d << " " << r2 << endl;

return 0;

}