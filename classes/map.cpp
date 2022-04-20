#include "map.h"

using namespace std; 

Map::Map()
{
    resetMap();
}


/*
 * Algorithm: Resets positions of player, NPC, misfortunes, sites to -1 and clears mapData  
 * Set Player position coordinates to 0
 * Set NPC position coordinates to -1
 * Set npc_on_map to false
 * Set misfortune_count to 0
 * Set site_count to 0
 * loop i from 0 to num_misfortunes
 *      Set row, col and type of misfortune location to -1
 * loop i from 0 to num_sites
 *      Set row, col and type of site location to -1
 * loop i from 0 to num_rows
 *      loop i from 0 to num_cols
 *          Set (x,y) location on mapData to '-'
 * Parameters: none
 * Return: nothing (void)
 */
void Map::resetMap() {
    // resets player position, count values, and initializes values in position arrays to -1
    playerPosition[0] = 0; 
    playerPosition[1] = 0;

    npcPosition[0] = -1;
    npcPosition[1] = -1;

    for (int i = 0; i < numLocations; i++) {
        locationsData[i][0] = -1;
        locationsData[i][1] = -1;
        locationsData[i][2] = -1;
    }

    npcPosition[0] = -1;
    npcPosition[1] = -1;

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
       