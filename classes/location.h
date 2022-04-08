#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>

using namespace std; 


class location
{
    private:
        string name;
        int rowPosition;
        int columnPosition;
        int locationPosition[2];
        locationPosition[0] = rowPosition;
        locationPosition[1] = columnPosition;

    public:
        //constructors
        location(int, int, string);

        //getters
        int getColPosition();
        int getRowPosition();
        getName();

        //setters
        setPosition(int, int);
        setName(string);
};
 
#endif