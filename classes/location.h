#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>

using namespace std; 


class Location
{
    private:
        string name;
        int rowPosition;
        int columnPosition;
        int locationPosition[2];
        locationPosition[0] = rowPosition;
        locationPosition[1] = columnPosition;

    public:
        //getters

        getPosition();
        getName();

        //setters

        setPosition(int, int);
};
 
#endif