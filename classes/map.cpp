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
    cout << "Map: B=Brats, C=Carnival, G=Gallery, S=Bookstore, A=Arby's, C=Creek, I=Creamery, T=Theater" << endl;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            mapData[i][j] = ' ';
        }
    }
    mapData[1][1]='B';
    mapData[1][6]='C';
    mapData[3][3]='G';
    mapData[3][7]='S';
    mapData[5][1]='A';
    mapData[5][5]='C';
    mapData[7][5]='I';
    mapData[7][2]='T';

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
       