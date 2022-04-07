#ifndef player_H
#define player_H

#include <iostream>
using namespace std;

class sigOther {
    private:
        string hair,eyes,gender,height,complexion;


    public:
        //constructors
        sigOther();
        sigOther(string, string, string, string, string);

        //getters
        string getGender();
        string getHair();
        string getEyes();
        string getHeight();
        string getComplexion();

        //setters
        void setGender(string);
        void setHair(string);
        void setEyes(string);
        void setHeight(string);
        void setComplexion(string);


};
#endif