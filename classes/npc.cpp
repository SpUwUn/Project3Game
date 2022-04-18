#include <iostream>
#include <fstream>
#include "npc.h"
using namespace std;

npc::npc(){
    name = "";
    dialogue = "";
}

npc::npc(string _name, string _dialogue){
    name = _name;
    dialogue = _dialogue;
}

string npc::getName(){
    return name;
}

string npc::getDialogue(){
    return dialogue;
}

void npc::setName(string _name){
    name = _name;
}

void npc::setDialogue(string _dialogue){
    dialogue = _dialogue;
}

    // inputString string: The text string containing data separated by a delimiter
    // separator char: The delimiter marking the location where the string should be split up
    // arr string: The array that will be used to store the input text string's individual string pieces
    // size int: The number of elements that can be stored in the array
    //-----------------------------------------------------------
    // creates an intermediary string (for storing strings that will soon have their own array) and a tracker for the amount of splits
    // creates a for loop, which runs for each location of the string
    // checks each location for the seperator, if not present it adds character to intermediary variable
    // if seperator is present, moves all of the stuff in intermediary into it's location in the new array.
    // if the for loop reaches the end of the input string, dump all remaining contents in intermediary into the new array
    int split(string inputString, char separator, string arr[], int size){
        string intermediary = "";
        int splitTracker = 0;
        for (int i=0; i < inputString.length(); i++){
            if (inputString[i] != separator){
                intermediary = intermediary+inputString[i];
                
            }
            else {
                arr[splitTracker] = intermediary;
                intermediary = "";
                splitTracker++;
            }
            if (splitTracker == size){
                return -1;
            }
            if (i == inputString.length()-1){
                arr[splitTracker] = intermediary;
                intermediary = "";
                splitTracker++;
            }
        }
        
        return splitTracker;
    }


//reads a file, with each line having a name and dialogue, seperated by a comma
//fills an array of npc objects
int npc::readDialogue(string filename){
    int readCount = 0;
    string tempArr[2];
    ifstream fin(filename);
    if (fin.is_open()){
        string line;
        while (getline(fin, line)){
            split(line, ',', tempArr, 2);
            npc(tempArr[1], tempArr[2]);
            readCount++;
        }
        fin.close();

    }
    else {
        return -1;
    }
    npcCount = readCount;
    return readCount;
}

