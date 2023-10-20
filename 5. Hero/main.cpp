#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

struct Character {
    int age;
    int health;
    int cleanliness;
    int happiness;
    int mood;
    int gender;  // 0 - Мужчина, 1 - Женщина
    string name;
    string race;
};

void generateCharacter(Character& player) {
    player.age = rand() % 11;
    player.health = rand() % 11;
    player.cleanliness = rand() % 11;
    player.happiness = rand() % 11;
    player.mood = rand() % 11;
    player.gender = rand() % 2;
    player.name = "Игрок";

    int raceChoice = rand() % 3;
    switch (raceChoice) {
    case 0:
        player.race = "Человек";
        break;
    case 1:
        player.race = "Эльф";
        break;
    case 2:
        player.race = "Орк";
        break;
    }
}

void displayCharacter(Character player) {
    cout << "Характеристики персонажа:" << endl;
    cout << "Возраст: " << player.age << endl;
    cout << "Здоровье: " << player.health << endl;
    cout << "Опрятность: " << player.cleanliness << endl;
    cout << "Счастье: " << player.happiness << endl;
    cout << "Настроение: " << player.mood << endl;
    cout << "Пол: " << (player.gender == 0 ? "Мужчина" : "Женщина") << endl;
    cout << "Имя: " << player.name << endl;
    cout << "Раса: " << player.race << endl;
}

void enterDungeon(Character& player) {
    int healthLoss = rand() % 11;
    player.health -= healthLoss;

    if (player.health <= 0) {
        cout << "Ваш персонаж умер. Конец игры!" << endl;
    }
    else {
        cout << "Вы вошли в подземелье и потеряли " << healthLoss << " здоровья." << endl;
    }
}

void upgradeHealth(Character& player) {
    if (player.health < 200) {
        player.health += 10;
        cout << "Ваше здоровье увеличено до " << player.health << endl;
    }
    else {
        cout << "Ваше здоровье уже на максимуме." << endl;
    }
}

int main() {
    srand(time(0));

    Character player;
    generateCharacter(player);

    cout << "Добро пожаловать в текстовую RPG игру!" << endl;
    displayCharacter(player);

    string choice;
    cout << "Желаете войти в подземелье? (Да/Нет): ";
    cin >> choice;

    if (choice == "Да" || choice == "да") {
        enterDungeon(player);
        while (player.health > 0) {
            int event = rand() % 10;
            switch (event) {
            case 0:
                cout << "Вы встретили монстра и одолели его!" << endl;
                if (player.health < 10) {
                    player.health = 0;
                }
                else {
                    player.health -= 10;
                }
                upgradeHealth(player);
                break;
            case 1:
                cout << "На вас напали разбойники и вы потеряли здоровье." << endl;
                enterDungeon(player);
                break;
                // Другие случайные события
            default:
                cout << "Вы двигаетесь дальше" << endl;
                break;
            }
        }
    }

    cout << "Спасибо за игру!" << endl;
    return 0;
}
