#include <iostream>
#include <fstream>
#include <sstream>
#include "location.h"
using namespace std;

location::location(){
    rowPosition = \0;
    columnPosition = \0;
    name = "";
}

location::location(int i, int j, string str){
    rowPosition = i;
    columnPosition = j;
    name = str;
}

int[2] location::getPosition(){
    int arr[2];
    arr[0] = rowPosition;
    arr[1] = columnPosition;
    return arr;
}

string location::getName(){
    return name;
}

location::setPosition(int i, int j){
    rowPosition = i;
    columnPosition = j;
}

location::setName(string str){
    name = str;
}