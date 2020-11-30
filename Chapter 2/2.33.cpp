#include <iostream>
using namespace std;

int main() {
    int i = 0, &r = i;
    auto a = r;
   

    const int ci = i, &cr = ci;

    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    const auto f = ci;

    auto &g = ci;
    const auto &j = 42;

    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;
    auto &n = i;
   
    a = 42;
    b = 42;
    c = 42;

    cout << i << " " << r << " " << a << endl;
    cout << ci << " " << cr << endl; 
    cout << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << j << endl; 
    cout << k << " " << l << " " << m << " " << p << " " << n << endl;



return 0;

}
