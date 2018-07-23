/*
 Name: Alex Gibson
 Purpose: Provide the code necessary to allow functionality to functional prototypes
        defined in "Alex.h" for "anyMain.cpp".
 */

 /*
 Pseudocode:
 
 1. Write all code for "seedRandom" function
 2. Write all code for "getRandomInt" function
 3. Write all code for "getRandomFloat" function
 ...
 
 */
 
 /*
 Make sure to check that all syntax (punctuation, spacing, capitalization, etc...) is
 correct, or not.
 
 Make sure that the user's view of the program is easy to read, understand, and operate.
*/ 

//include necessary libraries
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Alex.h"

//Specify a namespace
using namespace std;

void seedRandom()
    {
        //Use current time to seed the randomizer...
        srand (time(NULL));
    }



int getRandomInt(int low, int high)
    {
        //Get the range of values
        int range = high - low;
        //Return a random number between high and low
        return rand() % range + low;
    }



int getRandomFloat(float low, float high)
    {
        //Get the allowed range of data
        float range = high - low;
        //Do some funky offset math
        return (rand() / float (RAND_MAX) * (range - 1.0)) + low;
    }