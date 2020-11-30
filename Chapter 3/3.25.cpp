#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

vector <unsigned> score (11, 0);
unsigned grade;
auto beg = score.begin ();


while (cin >> grade) {
    if (grade <= 100) {
        auto a = beg + grade / 10;
        ++*a; 
    }
}
 
for (auto c : score)
cout << c << " ";    

cout << endl;

return 0; 
}

// 42 65 95 100 39 67 95 76 88 76 83 92 76 93 //