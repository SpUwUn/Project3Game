#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <vector>

using namespace std; 


class location
{
    private:
        bool visited;
        string name;
        int locationPosition[2]; //0 and 1 indeces represext x and y coord
        string initMessage;
        int option; //get user input
        vector<string> outcome; //each index is the result of an option


    public:
        //constructors
        location();
        location(string, vector<string>);

        //getters
        int getColPosition();
        int getRowPosition();
        string getName();
        string getOutcome(int);

        //setters
        void setPosition(int, int);
        void setName(string);
};
 
#endif