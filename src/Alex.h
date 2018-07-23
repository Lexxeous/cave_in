/*
 Name: Alex Gibsons
 Program Purpose: Call all functional prototypes from "Alex.cpp" for use in "anyMain.cpp"
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


//include guard
#ifndef ALEX
#define ALEX

/*
	Purpose: 1) Seed the random number generator to get better random numbers
 
	Inputs:  2) None
 
	Outputs: 3) None
 */
void seedRandom();



/*
	Purpose: 1) Allows the user to generate a random Integer value
 
	Inputs:  2) The upper and lower bounds for the random number
 
	Outputs: 3) The random integer that is higher than low, and lower than high
 */
int getRandomInt (int low, int high);



/*
	Purpose: 1) Allows the user to generate a random floating point value
 
	Inputs:  2) The upper and lower bounds for the random number
 
	Outputs: 3) The random floating point number that is higher than low, and lower than high
 */
int getRandomFloat (float low, float high);

#endif