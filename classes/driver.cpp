#include <iostream>
#include "npc.h"
#include "location.h"
#include "sigOther.h"
#include "map.h"
#include "player.h"
#include <cassert>
#include <vector>
#include <fstream>
using namespace std;

int split (string inputString, char separator, string arr[], int size){
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

int main(){
    //initialize and display map
    Map pearlStreet;
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(0, i, ' ');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(11, i, ' ');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(i, 0, ' ');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(i, 11, ' ');
    }
    pearlStreet.displayMap();
    
    //initialize player
    player player1;

    //initialize locations
    location locations[8];
    location branBrat("temp", {""});
    location boulderCarnival("temp", {""});
    location artGallery("temp", {""});
    location bookStore("temp", {""});
    location arbys("temp", {""});
    location walkPath("temp", {""});
    location iceCream("temp", {""});
    location theatre("temp", {""});
    locations[0] = branBrat;
    locations[1] = boulderCarnival;
    locations[2] = artGallery;
    locations[3] = bookStore;
    locations[4] = arbys;
    locations[5] = walkPath;
    locations[6] = iceCream;
    locations[7] = theatre;

    //initialize npcs
    npc npcs[8];
    npc Stali("Oleg", "I've heard that Brandon's Bratwursts' relish is made from fake pickles.");
    npc Yasmeen("Yasmeen", "I absolutely LOVE the ferris wheel.");
    npc Olwen("Olwen", "That Abe Lincoln painting at the gallery is so ugly its almost good!");
    npc Oleg("Oleg", "Rumor has that there is an ancient tome of knowledge at the bookstore, the kind of knowledge you can only get on a certain streaming site.");
    npc Musad("Musad", "Your date looks like someone who would love some bacon.");
    npc Shayne("Shayne", "I was just on Lover's Pass, and let me say, it was an experience.");
    npc Valeria("Valeria", "If you love hotdogs, then you have to go to Chilled Rock Creamery.");
    npc Romulo("Romulo", "There is not a lot of rock in the Boulder schoolhouse, that's for sure.");
    npcs[0] = Stali;
    npcs[1] = Yasmeen;
    npcs[2] = Olwen;
    npcs[3] = Oleg;
    npcs[4] = Musad;
    npcs[5] = Shayne;
    npcs[6] = Valeria;
    npcs[7] = Romulo;

    //insert code to choose random npc
    int randNpc = rand() % 8;

    //switch statement with 8 nested switch statements for the different locations*
    int playerOption;
    int playerOption2;
    bool location1Complete = false;
    bool location2Complete = false;
    bool location3Complete = false;
    bool location4Complete = false;
    bool location5Complete = false;
    bool location6Complete = false;
    bool location7Complete = false;
    bool location8Complete = false;


    ifstream fin("scores.txt");
    string line;
    string scores[1000];
    string names[1000];
    string tempArr[2];
    vector<int> vect;
    for (int i = 0; i < 1000; i++){
        if(stoi(scores[i]) > 0){
            vect.push_back(stoi(scores[i]));
        }
    }

    int temp;


    while (playerOption != 0){
        cout << "menu" << endl;
        cin >> playerOption;
        switch (playerOption){
            //finish date
            case 0:
                cout << "Thank you for playing. Your score is " << player1.getScore() << "." << endl;
                cout << "This is the current leaderboard:" << endl;
                while(!fin.eof()){
                    getline(fin, line);
                    split(line, ',', tempArr, 1000);
                    int i = 0;
                    scores[i] = tempArr[0];
                    names[i] = tempArr[1];
                    vect.push_back(stoi(scores[i]));
                }
                for(int i = 0; i < vect.size(); i++){
                    for(int j = i + 1; j < vect.size(); j++){
                        if(vect[j] < vect[i]) {
                            temp = vect[i];
                            vect[i] = vect[j];
                            vect[j] = temp;
                        }
                    }
                }
                for(int i = 0; i < vect.size(); i++){
                    cout << vect.at(i) << endl;
                }
                break;
            
            //location 1
            case 1:
                if (location1Complete == false){
                    while (location1Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location1Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location1Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location1Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location1Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "get out bitch" << endl; //you cant go to a location you have already been or something like that
                }
            //location 2
            case 2:
                if (location2Complete == false){
                    while (location2Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location2Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location2Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location2Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location2Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //location 3
            case 3:
                if (location3Complete == false){
                    while (location3Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location3Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location3Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location3Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location3Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //location 4
            case 4:
                if (location4Complete == false){
                    while (location4Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location4Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location4Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location4Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location4Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //location 5
            case 5:
                if (location5Complete == false){
                    while (location5Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location5Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location5Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location5Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location5Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //location 6
            case 6:
                if (location6Complete == false){
                    while (location6Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location6Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location6Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location6Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location6Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //location 7
            case 7:
                if (location7Complete == false){
                    while (location7Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location7Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location7Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location7Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location7Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //location 8
            case 8:
                if (location8Complete == false){
                    while (location8Complete == false){
                        cout << "text blurb" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location8Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location8Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.5); //change .5 to score multiplier of option
                                    location8Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location8Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
            //npc
            case 9:
                cout << npcs[randNpc].getDialogue() << endl;
                break;
            default:
                cout << "Please enter a valid option." << endl;
                break;
        }
    }
}
