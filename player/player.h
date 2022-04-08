 #ifndef player_H
#define player_H

#include <iostream>
using namespace std;

class player{
    private:
        int pos[2];
        float money;

    public:
        player();
        player(int, int, float);

        //getters
        int getColPosition();
        int getRowPosition();
        float getMoney();

        //setters
        setColPosition(int);
        setRowPosition(int);
        setMoney(float);
        
        //other functions
        int move(char direction);
        void enterLocation();
};

#endif
