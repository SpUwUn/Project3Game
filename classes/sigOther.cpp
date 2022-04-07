#include <iostream>
#include "sigOther.h"
using namespace std;

        //constructors
        sigOther::sigOther(){
            gender = "";
            hair = "";
            eyes = "";
            height = "";
            complexion = "";
        }
        sigOther::sigOther(string _gender, string _hair, string _eyes, string _height, string _complexion){
            gender = _gender;
            hair = _hair;
            eyes = _eyes;
            height = _height;
            complexion = _complexion;
        }

        //getters
        string sigOther::getGender(){
            return gender;
        }
        string sigOther::getHair(){
            return hair;
        }
        string sigOther::getEyes(){
            return eyes;
        }
        string sigOther::getHeight(){
            return height;
        }
        string sigOther::getComplexion(){
            return complexion;
        }

        //setters
        void sigOther::setGender(string _gender){
            gender = _gender;
        }
        void sigOther::setHair(string _hair){
            hair = _hair;
        }
        void sigOther::setEyes(string _eyes){
            eyes = _eyes;
        }
        void sigOther::setHeight(string _height){
            height = _height;
        }
        void sigOther::setComplexion(string _complexion){
            complexion = _complexion;
        }