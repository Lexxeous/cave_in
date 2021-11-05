/*
 Name: Jonathan Alexander Gibson
 Purpose: Provide the code necessary to allow functionality to functional prototypes
        defined in "lexx.h" for "anyMain.cpp".
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

// include necessary libraries
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "lexx.h"

// specify a namespace
using namespace std;


void printProgressBar (double percentage)
{
  int val = (int) (percentage * 100);
  int lpad = (int) (percentage * PBWIDTH);
  int rpad = PBWIDTH - lpad;
  printf ("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, "");
  fflush (stdout);
}


void seedRandom()
{
  // use current time to seed the randomizer...
  srand(time(NULL));
}


int rangeRandomInt(int low, int high)
{
  // get the range of values
  int range = high - low;
  // return a random number between "high" and "low"
  return rand() % range + low;
}


double rangeRandomDouble(double low, double high)
{
  // get the range of values
  double range = high - low;
  // return a random number between "high" and "low"
  return (rand() / double (RAND_MAX) * (range - 1)) + low;
}


float rangeRandomFloat(float low, float high)
{
  // get the range of values
  float range = high - low;
  // do some funky offset math
  return (rand() / float (RAND_MAX) * (range - 1)) + low;
}
