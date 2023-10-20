#include <iostream>

using namespace std;

int main() {


    int number;
    cout << "Введите число для вычисления факториала: ";
    cin >> number;

    if (number < 0) {
        cout << "Факториал отрицательных чисел не определен." << endl;
    }
    else {
        int factorial = 1;
        int i = 1;

        do {
            factorial *= i;
            i++;
        } while (i <= number); // постусловие

        cout << "Факториал " << number << " равен: " << factorial << endl;
    }

    return 0;
}
