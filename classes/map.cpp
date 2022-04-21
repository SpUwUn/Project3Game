#include "map.h"

using namespace std; 

Map::Map()
{
    resetMap();
}


/*
 * Algorithm: Resets map
 * loop i from 0 to num_rows
 *      loop i from 0 to num_cols
 *          Set (x,y) location on mapData to '-'
 * Parameters: none
 * Return: nothing (void)
 */
void Map::resetMap() {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            mapData[i][j] = ' ';
        }
    }
}

/*
 * Algorithm: This function prints a 2D map in the terminal.
 * Loop i from 0 to number of rows
 *      Loop j from 0 to number of columns
 *          if player position is at (i,j)
 *              print "x"
 *          else if Hacker is at (i,j)
 *              print "-"
 *          else
 *              print the value of (i,j) in mapData
 * Parameters: none
 * Return: nothing (void)
 */
void Map::displayMap() {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            cout << mapData[i][j];
        }
        cout << endl;
    }
}

void Map::setMapData(int i, int j, char c){
    mapData[i][j] = c;
}
       