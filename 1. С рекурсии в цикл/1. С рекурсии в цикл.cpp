#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; // Базовый случай: факториал 0 равен 1.
    }
    else {
        return n * factorial(n - 1); // Рекурсивный случай: n! = n * (n-1)!
    }
}

int main() {
    int n;
    cout << "Введите число, для которого вы хотите найти факториал: ";
    cin >> n; // Запрашиваем у пользователя ввод числа.

    if (n < 0) {
        cout << "Факториал отрицательного числа не определен." << endl;
    }
    else {
        int result = factorial(n);
        cout << "Факториал числа " << n << " равен: " << result << endl;
    }

    return 0;
}
