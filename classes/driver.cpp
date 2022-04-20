#include <iostream>
#include "npc.h"
#include "location.h"
#include "sigOther.h"
#include "map.h"
#include "player.h"
#include <cassert>
using namespace std;

int main(){
    //initialize and display map
    Map pearlStreet;
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(0, i, ' ');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(11, i, ' ');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(i, 0, ' ');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(i, 11, ' ');
    }
    pearlStreet.displayMap();
    
    //initialize locations
    location locations[8];
    location branBrat("temp", {""});
    location boulderCarnival("temp", {""});
    location artGallery("temp", {""});
    location bookStore("temp", {""});
    location arbys("temp", {""});
    location walkPath("temp", {""});
    location iceCream("temp", {""});
    location theatre("temp", {""});
    locations[0] = branBrat;
    locations[1] = boulderCarnival;
    locations[2] = artGallery;
    locations[3] = bookStore;
    locations[4] = arbys;
    locations[5] = walkPath;
    locations[6] = iceCream;
    locations[7] = theatre;

    //initialize npc's
    npc npcs[8];
    npc Stali("", "");
    npc Yasmeen("", "");
    npc Olwen("", "");
    npc Oleg("", "");
    npc Musad("", "");
    npc Shayne("", "");
    npc Valeria("", "");
    npc Romulo("", "");
    npcs[0] = Stali;
    npcs[1] = Yasmeen;
    npcs[2] = Olwen;
    npcs[3] = Oleg;
    npcs[4] = Musad;
    npcs[5] = Shayne;
    npcs[6] = Valeria;
    npcs[7] = Romulo;

    //
}