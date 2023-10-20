#include <iostream>
#include "converter.h"

using namespace std;

int main() {
    int decimalNumber;

    // Ввод числа в десятичной системе
    cout << "Введите целое число в десятичной системе счисления: ";
    cin >> decimalNumber;

    // Выбор системы счисления для конвертации
    cout << "Выберите систему счисления для конвертации:\n";
    cout << "1. Двоичная\n";
    cout << "2. Восьмеричная\n";
    cout << "3. Шестнадцатеричная\n";
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Число " << decimalNumber << " в двоичной системе: " << decimalToBinary(decimalNumber) << endl;
        break;
    case 2:
        cout << "Число " << decimalNumber << " в восьмеричной системе: " << decimalToOctal(decimalNumber) << endl;
        break;
    case 3:
        cout << "Число " << decimalNumber << " в шестнадцатеричной системе: " << decimalToHexadecimal(decimalNumber) << endl;
        break;
    default:
        cout << "Неверный выбор." << endl;
        break;
    }

    return 0;
}

