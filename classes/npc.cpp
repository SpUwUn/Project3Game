#include <iostream>
#include <fstream>
#include <sstream>
#include "npc.h"
using namespace std;

npc::npc(){
    name = "";
    dialogue = "";
}

npc::npc(string _name, string _dialogue){
    name = _name;
    dialogue = _dialogue;
}

string npc::getName(){
    return name;
}

string npc::getDialogue(){
    return dialogue;
}

void npc::setName(string _name){
    name = _name;
}

void npc::setDialogue(string _dialogue){
    dialogue = _dialogue;
}


//IN PROGRESS
int npc::readDialogue(string filename){
    return -1;
}