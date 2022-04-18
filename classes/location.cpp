#include <iostream>
#include <fstream>
#include <sstream>
#include "location.h"
using namespace std;

location::location(){
    rowPosition = -1;
    columnPosition = -1;
    name = "";
}

location::location(int i, int j, string str1, vector vect){
    rowPosition = i;
    columnPosition = j;
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
string getOutcome(int i){
    return outcome.at(i);
}

void location::setPosition(int i, int j){
    locationPosition[0] = i;
    locationPosition[1] = j;
}

void location::setName(string str){
    name = str;
}