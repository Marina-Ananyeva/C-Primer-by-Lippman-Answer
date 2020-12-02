#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstddef>

int main () {

std::cout << "bool\t\t\tis " << sizeof (bool) << " bytes." << std::endl;

std::cout << std::endl;

std::cout << "char\t\t\tis " << sizeof (char) << " bytes." << std::endl;
std::cout << "unsigned char\t\tis " << sizeof (unsigned char) << " bytes." << std::endl;
std::cout << "wchar_t\t\t\tis " << sizeof (wchar_t) << " bytes." << std::endl;
std::cout << "char16_t\t\tis " << sizeof (char16_t) << " bytes." << std::endl;
std::cout << "char32_t\t\tis " << sizeof (char32_t) << " bytes." << std::endl;

std::cout << std::endl;

std::cout << "short\t\t\tis " << sizeof (short) << " bytes." << std::endl;
std::cout << "unsigned short\t\tis " << sizeof (unsigned short) << " bytes." << std::endl;

std::cout << std::endl;

std::cout << "int\t\t\tis " << sizeof (int) << " bytes." << std::endl;
std::cout << "unsigned int\t\tis " << sizeof (unsigned int) << " bytes." << std::endl;
std::cout << "int8_t\t\t\tis " << sizeof (int8_t) << " bytes." << std::endl;
std::cout << "uint8_t\t\t\tis " << sizeof (uint8_t) << " bytes." << std::endl;
std::cout << "int16_t\t\t\tis " << sizeof (int16_t) << " bytes." << std::endl;
std::cout << "uint16_t\t\tis " << sizeof (uint16_t) << " bytes." << std::endl;
std::cout << "int32_t\t\t\tis " << sizeof (int32_t) << " bytes." << std::endl;
std::cout << "uint32_t\t\tis " << sizeof (uint32_t) << " bytes." << std::endl;
std::cout << "int64_t\t\t\tis " << sizeof (int64_t) << " bytes." << std::endl;
std::cout << "uint64_t\t\tis " << sizeof (uint64_t) << " bytes." << std::endl;

std::cout << std::endl;

std::cout << "long\t\t\tis " << sizeof (long) << " bytes." << std::endl;
std::cout << "ulong\t\t\tis " << sizeof (ulong) << " bytes." << std::endl;
std::cout << "long long\t\tis " << sizeof (long long) << " bytes." << std::endl;
std::cout << "unsigned long long\tis " << sizeof (unsigned long long) << " bytes." << std::endl;

std::cout << std::endl;

std::cout << "float\t\t\tis " << sizeof (float) << " bytes." << std::endl;
std::cout << "double\t\t\tis " << sizeof (double) << " bytes." << std::endl;
std::cout << "long double\t\tis " << sizeof (long double) << " bytes." << std::endl;

std::cout << std::endl;

return 0;
}

