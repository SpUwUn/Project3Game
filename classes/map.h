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
          void displayMap();

          // setters
          void setMapData(int, int, char);
       
};
 
#endif
