#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
    private:
        char symbol = '@';
        int hp = 100;
        int mp = 10;
        int lv = 1;
        int positionX = 0;
        int positionY = 0;
};

#endif // PLAYER_H
