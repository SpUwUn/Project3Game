#include <iostream>
#include "npc.h"
#include "location.h"
#include "sigOther.h"
#include "map.h"
#include "player.h"
#include <cassert>
using namespace std;

int main(){
    location location1;
    assert(location1.getName() == "");
    assert(location1.getColPosition() == \0);
    assert(location1.getRowPosition() == \0);

    location location2(1, 1, bar);
    assert(location2.getName() == "bar");
    assert(location2.getColPosition() == 1);
    assert(location2.getRowPosition() == 1);

    player player1;
    assert(player1.getMoney() == "");
    assert(player1.getColPosition() == \0);
    assert(player1.getRowPosition() == \0);

    player2(1, 1, bar);
    assert(player2.getMoney() == "bar");
    assert(player2.getColPosition() == 1);
    assert(player2.getRowPosition() == 1);
}
