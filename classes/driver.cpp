#include <iostream>
#include "npc.h"
#include "location.h"
#include "sigOther.h"
#include "map.h"
#include "player.h"
#include <cassert>
using namespace std;

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
    npc Stali("", "");
    npc Yasmeen("", "");
    npc Olwen("", "");
    npc Oleg("", "");
    npc Musad("", "");
    npc Shayne("", "");
    npc Valeria("", "");
    npc Romulo("", "");
    npcs[0] = Stali;
    npcs[1] = Yasmeen;
    npcs[2] = Olwen;
    npcs[3] = Oleg;
    npcs[4] = Musad;
    npcs[5] = Shayne;
    npcs[6] = Valeria;
    npcs[7] = Romulo;

    //insert code to choose random npc
    //
    //
    //
    //

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
    while (playerOption != 0){
        cout << "menu" << endl;
        cin >> playerOption;
        switch (playerOption){
            case 0:
                cout << "Thank you for playing. Your score is " << player1.getScore() << ".";
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
                cout << "text blurb" << endl;
                break;
            default:
                cout << "Please enter a valid option." << endl;
                break;
        }
    }
}
