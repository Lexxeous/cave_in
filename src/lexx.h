/*
 Name: Jonathan Alexander Gibson
 Program Purpose: Call all functional prototypes from "lexx.cpp" for use in "anyMain.cpp"
 */

/*
 Pseudocode:
 1. Define the guard
 2. Define functional prototypes used in "Alex.cpp"
 3. End the guard
*/


/*
 Make sure to check that all syntax (punctuation, spacing, capitalization, etc...) is
 correct, or not.
 Make sure that the user's view of the program is easy to read, understand, and operate.
*/


// include guard
#ifndef LEXX
#define LEXX

#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 100


/*
	Purpose: 1) Print a progress bar indicator
	Inputs:  2) Percentile (0.0 ~ 1.0) of type "double"
	Outputs: 3) None
*/
void printProgressBar (double percentage);


/*
	Purpose: 1) Seed the random number generator
	Inputs:  2) None
	Outputs: 3) None
*/
void seedRandom();


/*
	Purpose: 1) Allows the user to generate a random Integer value
	Inputs:  2) The upper and lower bounds for the random number
	Outputs: 3) A random number between "high" and "low" of type "integer"
*/
int rangeRandomInt(int low, int high);


/*
	Purpose: 1) Allows the user to generate a random Integer value
	Inputs:  2) The upper and lower bounds for the random number
	Outputs: 3) A random number that is between "high" and "low" of type "double"
*/
double rangeRandomDouble(double low, double high);


/*
	Purpose: 1) Allows the user to generate a random floating point value
	Inputs:  2) The upper and lower bounds for the random number
	Outputs: 3) A random number that is between "high" and "low" of type "float"
*/
float rangeRandomFloat(float low, float high);

#endif //for LEXX
