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
        int getNpcCount();

        //setters
        void setName(string);
        void setDialogue(string);
        void setNpcCount(int);
        
        int readNPC(string);


};

#endif