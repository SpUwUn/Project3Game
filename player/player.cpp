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

int player::getColPosition(){
    return pos[i];
}

int player::getRowPosition(){
    return pos[j];
}

float player::getMoney(){
    return money;
}

void player::setColPosition(int num){
    pos[i] = num;
}

void player::setRowPosition(int num){
    pos[j] = num;
}

void player::setMoney(float num){
    money = num;
}

int move(char direction)
//will add or subtract one from either cooridante to represent a movement on the grid.
//will also check for valid inputs and check whether movement is possible

void enterLocation()
//if the player is next to/on a tile with a location then they will enter it