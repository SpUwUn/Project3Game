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
          char mapData[num_rows][num_cols];
     public:
          Map();

          void resetMap();

          // getters
          int getPlayerRowPosition();
          int getPlayerColPosition();
          bool isFreeSpace(int, int);

          // setterss
          void setPlayerRowPosition(int);
          void setPlayerColPosition(int);

          // other
          void displayMap();
          bool executeMove(char);
          bool spawnNPC(int, int);

};
 
#endif
