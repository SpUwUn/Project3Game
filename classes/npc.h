#ifndef npc_H
#define npc_H

#include <iostream>
using namespace std;

class npc{

    private:
        string name = "";
        string dialogue = "";
        int npcCount = 0;

    public:
        //constructors
        npc();
        npc(string, string);

        //getters
        string getName();
        string getDialogue();

        //setters
        void setName(string);
        void setDialogue(string);
        int readNPC(string);


};

#endif