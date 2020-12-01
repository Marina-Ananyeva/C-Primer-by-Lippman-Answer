#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstddef>

using namespace std;

int main () {

unsigned grade;
string finaldrade;

cin >> grade;
    
if (grade > 90) 
    finaldrade = "high pass";
if (grade < 60) 
    finaldrade = "fail";
else 
    (grade > 75) ? finaldrade = "pass" : finaldrade = "low pass";

cout << finaldrade << endl;    

return 0;
}

