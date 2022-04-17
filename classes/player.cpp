#include <iostream>
#include <fstream>
#include <sstream>
#include "location.h"
using namespace std;

player::player(){
    money = 100;
}

player::player(float f){
    money = f;
}

float player::getMoney(){
    return money;
}

void player::setMoney(float num){
    money = num;
}

void enterLocation()
//if the player is next to/on a tile with a location then they will enter it