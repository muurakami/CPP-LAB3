#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Функция для преобразования числа в десятичную систему счисления
int toDecimal(const string& number, int base) {
    int decimalNumber = 0;
    int power = 0;

    for (int i = number.length() - 1; i >= 0; i--) {
        int digit;
        if (isdigit(number[i])) {
            digit = number[i] - '0';
        }
        else {
            digit = toupper(number[i]) - 'A' + 10;
        }

        decimalNumber += digit * pow(base, power);
        power++;
    }

    return decimalNumber;
}

// Функция для преобразования числа из десятичной системы в другую
string fromDecimal(int decimalNumber, int base) {
    string result;

    while (decimalNumber > 0) {
        int digit = decimalNumber % base;
        char digitChar = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
        result = digitChar + result;
        decimalNumber /= base;
    }

    return result;
}

int main() {
    string input1, input2;
    int base1, base2;

    cout << "Введите первое число: ";
    cin >> input1;
    cout << "Введите систему счисления первого числа (2, 8, 10, 16 и т. д.): ";
    cin >> base1;

    cout << "Введите второе число: ";
    cin >> input2;
    cout << "Введите систему счисления второго числа (2, 8, 10, 16 и т. д.): ";
    cin >> base2;

    int decimal1 = toDecimal(input1, base1);
    int decimal2 = toDecimal(input2, base2);

    char operation;
    cout << "Выберите операцию (+ или -): ";
    cin >> operation;

    int resultDecimal;

    if (operation == '+') {
        resultDecimal = decimal1 + decimal2;
    }
    else if (operation == '-') {
        resultDecimal = decimal1 - decimal2;
    }
    else {
        cout << "Неверная операция." << endl;
        return 1;
    }

    cout << "Результат в десятичной системе: " << resultDecimal << endl;

    cout << "Результат в " << base1 << "-й системе счисления: " << fromDecimal(resultDecimal, base1) << endl;
    cout << "Результат в " << base2 << "-й системе счисления: " << fromDecimal(resultDecimal, base2) << endl;

    return 0;
}
