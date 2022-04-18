#include <iostream>
#include <fstream>
#include <sstream>
#include "player.h"
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