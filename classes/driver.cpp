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

    //switch statement with 8 nested switch statements for the different locations*
    int playerOption;
    int playerOption2;
    while (playerOption != 0){
        cout << "menu" << endl;
        cin >> playerOption;
        switch (playerOption){
            case 0:
                cout << "Thank you for playing. Your score is " << /*score variable*/ << ".";
                break;
            //location 1
            case 1:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 2
            case 2:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 3
            case 3:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 4
            case 4:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 5
            case 5:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 6
            case 6:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 7
            case 7:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //location 8
            case 8:
                cin >> playerOption2;
                switch (playerOption2){
                    case 1:
                
                        break;
                    case 2:
                
                        break;
                    case 3:
                
                        break;
                }
                break;
            //npc
            case 9:
                cout << "text blurb" << endl;
                        break;
                }
                break;
        }
    }
}
