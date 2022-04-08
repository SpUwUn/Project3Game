#ifndef npc_H
#define npc_H

#include <iostream>
using namespace std;

class npc{

    private:
        string name = "";
        string dialogue = "";

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
        int readDialogue(string);


};

#endif