#include <iostream>
#include "Tamagotchi.h"

using namespace std;

int main() {
    Tamagotchi tamagotchi;

    std::cout << "Добро пожаловать в игру Tamagotchi!\n";

    while (true) {
        tamagotchi.showStatus();

        int choice;
        cout << "Выберите действие:\n";
        cout << "1. Кормить молодильное яблоко\n";
        cout << "2. Заразить персонажа\n";
        cout << "3. Пройти раунд\n";
        cout << "4. Выйти из игры\n";
        cin >> choice;

        switch (choice) {
        case 1:
            tamagotchi.eatYoungApple();
            break;
        case 2:
            tamagotchi.infect();
            break;
        case 3:
            tamagotchi.liveRound();
            break;
        case 4:
            cout << "Игра завершена. До свидания!\n";
            return 0;
        default:
            cout << "Неверный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}
