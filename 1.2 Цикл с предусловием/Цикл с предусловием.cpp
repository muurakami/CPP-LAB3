#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число, для которого вы хотите вычислить факториал: ";
    cin >> n;

    // Проверка на отрицательное число
    if (n < 0) {
        cout << "Факториал отрицательных чисел не определен." << endl;
    }
    else {
        int factorial = 1;
        int i = 1;

        while (i <= n) {
            factorial *= i;
            i++;
        }

        cout << "Факториал числа " << n << " равен " << factorial << endl;
    }

    return 0;
}
