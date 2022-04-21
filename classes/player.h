 #ifndef player_H
#define player_H

#include <iostream>
using namespace std;

class player{
    private:
        float money;
        float score;

    public:
        player();
        player(float);

        //getters
        float getMoney();
        float getScore();

        //setters
        void setMoney(float);
        void setScore(float);
};

#endif
