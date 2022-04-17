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
int location::getColPosition(){
    return columnPosition;
}
int location::getRowPosition(){
    return rowPosition;
}
string location::getName(){
    return name;
}
string getOutcome(int i);{
    return outcome.at(i);
}

void location::setPosition(int i, int j){
    rowPosition = i;
    columnPosition = j;
}

void location::setName(string str){
    name = str;
}