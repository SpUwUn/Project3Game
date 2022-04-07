#include <iostream>
#include <fstream>
#include <sstream>
#include "location.h"
using namespace std;

player::player(){
    pos[0] = 0;
    pos[1] = 0;
    money = 100;
}

player::player(int i, int j, float f){
    pos[0] = i;
    pos[1] = j;
    money = f;
}

int move(char direction)
//will add or subtract one from either cooridante to represent a movement on the grid.
//will also check for valid inputs and check whether movement is possible

void enterLocation()
//if the player is next to/on a tile with a location then they will enter it