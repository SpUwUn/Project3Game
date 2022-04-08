#include <iostream>
#include "npc.h"
//#include "location.h"
#include "sigOther.h"
//#include "map.h"
//#include "player.h"
#include <cassert>
using namespace std;

int main(){


//npc class tests

    npc patrick = npc();
    assert(patrick.getName() == "");
    assert(patrick.getDialogue() == "");
    patrick.setName("Patrick");
    patrick.setDialogue("Do you like Huey Lewis and the News?");
    assert(patrick.getName() == "Patrick");
    assert(patrick.getDialogue() == "Do you like Huey Lewis and the News?");

    npc jim = npc("Jim", "Hi I'm Jim!");
    assert(jim.getName() == "Jim");
    assert(jim.getDialogue() == "Hi I'm Jim!");

//sigOther class tests

    sigOther sarah = sigOther();
    assert(sarah.getComplexion() == "");
    assert(sarah.getEyes() == "");
    assert(sarah.getGender() == "");
    assert(sarah.getHeight() == "");
    assert(sarah.getHair() == "");

    sarah.setEyes("green");
    sarah.setComplexion("freckles");
    sarah.setGender("female");
    sarah.setHeight("tall");
    sarah.setHair("blonde");

    assert(sarah.getComplexion() == "freckles");
    assert(sarah.getEyes() == "green");
    assert(sarah.getGender() == "female");
    assert(sarah.getHeight() == "tall");
    assert(sarah.getHair() == "blonde");

    sigOther Jane = sigOther("female", "brunette", "brown", "short", "clear");
    assert(Jane.getGender() == "female");
    assert(Jane.getHair() == "brunette");
    assert(Jane.getEyes() == "brown");
    assert(Jane.getHeight() == "short");
    assert(Jane.getComplexion() == "clear");




}
