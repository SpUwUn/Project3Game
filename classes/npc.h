#include <iostream>
using namespace std;

class npc{

    private:
        string name = "";
        string dialogue = "";

    public:
        npc();
        npc(string, string);
        string getName();
        string getDialogue();
        void setName(string);
        void setDialogue(string);
        void readDialogue(string);


};