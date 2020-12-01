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
    
(grade > 90) ? finaldrade = "high pass" 
             : (grade < 60) ? finaldrade = "fail" 
                            : (grade > 75) ? finaldrade = "pass" : finaldrade = "low pass";

cout << finaldrade << endl;    

return 0;
}

