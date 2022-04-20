#include <iostream>
#include <fstream>
#include "location.h"
using namespace std;

location::location(){
    locationPosition[0] = -1;
    locationPosition[1] = -1;
    name = "";
}

location::location(string str, vector<string> vect){
    name = str;
    outcome = vect;
}

//getters
int location::getRowPosition(){
    return locationPosition[0];
}
int location::getColPosition(){
    return locationPosition[1];
}

string location::getName(){
    return name;
}
string location::getOutcome(int i){
    return outcome.at(i);
}

void location::setPosition(int i, int j){
    locationPosition[0] = i;
    locationPosition[1] = j;
}

void location::setName(string str){
    name = str;
}