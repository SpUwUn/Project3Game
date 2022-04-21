#ifndef MAP_H
#define MAP_H

#include <iostream>

using namespace std; 


class Map
{
     private:
          static const int num_rows = 12;
          static const int num_cols = 12;

          char locationsData[12][12]; //1st dimensions is index, 2nd is position and map char
          
     public :
          Map();

          void resetMap();
          void displayMap();
          void setMapData(int, int, char);
};
 
#endif
