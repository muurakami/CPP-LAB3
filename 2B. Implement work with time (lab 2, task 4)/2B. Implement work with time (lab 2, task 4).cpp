#include <iostream>

using namespace std;

void convertYearsToDays() {
    int years;
    cout << "Введите количество лет: ";
    cin >> years;
    int days = years * 365;
    cout << years << " лет составляют " << days << " дней." << endl;
}

void convertDaysToHours() {
    int days;
    cout << "Введите количество дней: ";
    cin >> days;
    int hours = days * 24;
    cout << days << " дней составляют " << hours << " часов." << endl;
}

void convertDaysToMinutes() {
    int days;
    cout << "Введите количество дней: ";
    cin >> days;
    int minutes = days * 24 * 60;
    cout << days << " дней составляют " << minutes << " минут." << endl;
}

void convertHoursToMinutes() {
    int hours;
    cout << "Введите количество часов: ";
    cin >> hours;
    int minutes = hours * 60;
    cout << hours << " часов составляют " << minutes << " минут." << endl;
}

void convertHoursToSeconds() {
    int hours;
    cout << "Введите количество часов: ";
    cin >> hours;
    int seconds = hours * 60 * 60;
    cout << hours << " часов составляют " << seconds << " секунд." << endl;
}

void convertMinutesToSeconds() {
    int minutes;
    cout << "Введите количество минут: ";
    cin >> minutes;
    int seconds = minutes * 60;
    cout << minutes << " минут составляют " << seconds << " секунд." << endl;
}

int main() {
    int choice;

    cout << "Доступные операции:" << endl;
    cout << "1. Конвертировать годы в дни" << endl;
    cout << "2. Конвертировать дни в часы" << endl;
    cout << "3. Конвертировать дни в минуты" << endl;
    cout << "4. Конвертировать часы в минуты" << endl;
    cout << "5. Конвертировать часы в секунды" << endl;
    cout << "6. Конвертировать минуты в секунды" << endl;
    cout << "Выберите операцию: ";
    cin >> choice;

    if (choice == 1) {
        convertYearsToDays();
    }
    else if (choice == 2) {
        convertDaysToHours();
    }
    else if (choice == 3) {
        convertDaysToMinutes();
    }
    else if (choice == 4) {
        convertHoursToMinutes();
    }
    else if (choice == 5) {
        convertHoursToSeconds();
    }
    else if (choice == 6) {
        convertMinutesToSeconds();
    }
    else {
        cout << "Недопустимая операция." << endl;
    }

    return 0;
}

