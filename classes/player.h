 #ifndef player_H
#define player_H

#include <iostream>
using namespace std;

class player{
    private:
        float money;

    public:
        player();
        player(float);

        //getters
        float getMoney();

        //setters
        void setMoney(float);
};

#endif
