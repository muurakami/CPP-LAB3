#include <iostream>

using namespace std;

int main() {
    int userValue;

    cout << "Введите число от 1 до 12: ";
    cin >> userValue;

    if (userValue >= 1 && userValue <= 12) {
        cout << "Введенное значение находится в допустимом диапазоне." << endl;
    }
    else {
        cout << "Вы вышли за пределы диапозона" << endl;
    }

    return 0;
}
