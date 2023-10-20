#include "converter.h"
#include <bitset>

using namespace std;

string decimalToBinary(int decimalNumber) {
    // Преобразование в двоичную систему с помощью std::bitset
    bitset<sizeof(int) * 8> binary(decimalNumber);
    return binary.to_string();
}

string decimalToOctal(int decimalNumber) {
    // Преобразование в восьмеричную систему
    string octal;
    while (decimalNumber > 0) {
        octal = to_string(decimalNumber % 8) + octal;
        decimalNumber /= 8;
    }
    return octal;
}

string decimalToHexadecimal(int decimalNumber) {
    // Преобразование в шестнадцатеричную систему
    string hex;
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10) {
            hex = char('0' + remainder) + hex;
        }
        else {
            hex = char('A' + remainder - 10) + hex;
        }
        decimalNumber /= 16;
    }
    return hex;
}
