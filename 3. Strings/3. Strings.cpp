#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, slogan;
    int age;

    cout << "Введите ваше полное имя: ";
    getline(cin, name); // считывает строку и сохраняет её в name 

    cout << "Введите ваш возраст: ";
    cin >> age;

    cin.ignore();

    cout << "Введите ваш девиз (или нажмите Enter, если отсутствует): ";
    getline(cin, slogan);

    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << " лет" << endl;
    cout << "Девиз: ";

    if (slogan.empty()) {
        cout << "отсутствует" << endl;
    }
    else {
        cout << slogan << endl;
    }

    return 0;
}
