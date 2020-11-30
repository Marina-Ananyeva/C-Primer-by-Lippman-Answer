#include <iostream>
using namespace std;

int main() {
    int i = 0;
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;


    r1 = v2;
    cout << r1 << " " << v2 << endl;

    p2 = p1;
    cout << p2 << " " << p1 << endl;

    p2 = p3;
    cout << p2 << " " << p3 << endl;

    int null = 0, *p = &null;
    cout << null << " " << p << endl;
    
return 0;

}
