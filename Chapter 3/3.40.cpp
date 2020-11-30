#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <cstring> 

using namespace std;

int main () {

char s1 [] = "Hello";
char s2 [] = "World";
char largeStr [20];

strcpy (largeStr, s1);
strcat (largeStr, ",");
strcat (largeStr, " ");
strcat (largeStr, s2);
strcat (largeStr, "!");

cout << largeStr << endl;

return 0; 
}
