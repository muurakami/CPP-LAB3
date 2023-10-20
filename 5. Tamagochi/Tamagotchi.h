#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <bitset>

class Tamagotchi {
public:
    Tamagotchi();
    void showStatus();
    void eatYoungApple();
    void infect();
    void liveRound();

private:
    std::bitset<8> status;
};

#endif
