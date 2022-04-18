#ifndef MAP_H
#define MAP_H

#include <iostream>

using namespace std; 


class Map
{
     private:
          static const int num_rows = 12;
          static const int num_cols = 12;


          int playerPosition[2];
          int npcPosition[2];
          int numLocations;
          char mapData[num_rows][num_cols];
          char locationsData[5][3]; //1st dimensions is index, 2nd is position and map char
          
     public :
          Map();

          void resetMap();
          bool isFreeSpace(int, int);
          void displayMap();

          // getters
          int getPlayerRowPosition();
          int getPlayerColPosition();

          // setters
          void setPlayerRowPosition(int);
          void setPlayerColPosition(int);

          //location related functions
          bool spawnLocation(int, int, int);
          bool isLocation(int, int);
          bool enterLocation();

          //npc related functions
          bool spawnNpc(int, int);
          bool isNpc(int, int);
          bool talkNpc();

          //player related functions
          //bool executeMove(char);
};
 
#endif
