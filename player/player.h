#ifndef player_H
#define player_H

#include <iostream>
using namespace std;

class player{
    private:
        int pos[12][12];
        float money;
    public:
        int move(char direction);
        void enter();
};

#endif
