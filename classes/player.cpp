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
float player::getScore(){
    return score;
}

void player::setMoney(float num){
    money = num;
}
void player::setScore(float num){
    score = num;
}