/*
 Name: Alex Gibson
 Program Date: 12/14/2015
 Program Purpose:
 */

/*
 Pseudocode:

 1. Define the guard
 2. Define functional prototypes used in "filName"
 3. End the guard

*/


/*
 Make sure to check that all syntax (punctuation, spacing, capitalization, etc...) is
 correct, or not.

 Make sure that the user's view of the program is easy to read, understand, and operate.
*/


//include guard
#ifndef COMMAND
#define COMMAND

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "lexx.h"

using namespace std;

extern string
command,
heroName,
friend1,
friend2,
friend3;

extern bool
// items
shovel,
pickaxe,
flashlight,
battery, // introduced in 1907; standardized by ANSI in 1947
plasticShell,
crowbar,
lighter, // old zippo; invented in 1932; used butane liquid as fuel
stickOfTNT,
largePlank,
WD40, // wd-40 was invented in 1953
rustyKey,
rope,
hook, // broken support curved thing hanging from ceiling; D-ring quick-release; bolt in rock ceiling
grapple,

// relics
starCoin,
bloodDiamond,
sacrificialDagger,

// obstacles
pileOfSand,
pileOfDirt,
r0c2PileOfRocks,
r0c3PileOfRocks,
r6c0weakWall,
r7c11weakWall,
stream,
moss,
gunpowderBarrels,
gasBarrels,
minecarts,
giantDrill,
altarRoom,
cultistBook,
cultistNote,
minersNote,
minerNote,

// friends
foundFriend1,
foundFriend2,
foundFriend3;

void HELP();

void INVENTORY();

void FRIENDS();

void MAP();

void intro();

void CULTISTBOOK();

void CULTISTNOTE();

void MINERNOTE();

void MINERSNOTE();

//Player is on a grid of row 'x', column 'y' (rXcY)
//row 0
void r0c0();
void r0c1();
void r0c2();
void r0c3();
void r0c4();
void r0c5();
void r0c6();
void r0c7();
void r0c8();
void r0c9();
void r0c10();
void r0c11();
void r0c12();

//row 1
void r1c0();
void r1c1();
void r1c2();
void r1c3();
void r1c4();
void r1c5();
void r1c6();
void r1c7();
void r1c8();
void r1c9();
void r1c10();
void r1c11();
void r1c12();

//row 2
void r2c0();
void r2c1();
void r2c2();
void r2c3();
void r2c4();
void r2c5();
void r2c6();
void r2c7();
void r2c8();
void r2c9();
void r2c10();
void r2c11();
void r2c12();


//row 3
void r3c0();
void r3c1();
void r3c2();
void r3c3();
void r3c4();
void r3c5();
void r3c6();
void r3c7();
void r3c8();
void r3c9();
void r3c10();
void r3c11();
void r3c12();


//row 4
void r4c0();
void r4c1();
void r4c2();
void r4c3();
void r4c4();
void r4c5();
void r4c6();
void r4c7();
void r4c8();
void r4c9();
void r4c10();
void r4c11();
void r4c12();


//row 5
void r5c0();
void r5c1();
void r5c2();
void r5c3();
void r5c4();
void r5c5();
void r5c6();
void r5c7();
void r5c8();
void r5c9();
void r5c10();
void r5c11();
void r5c12();


//row 6
void r6c0();
void r6c1();
void r6c2();
void r6c3();
void r6c4();
void r6c5();
void r6c6();
void r6c7();
void r6c8();
void r6c9();
void r6c10();
void r6c11();
void r6c12();


//row 7
void r7c0();
void r7c1();
void r7c2();
void r7c3();
void r7c4();
void r7c5();
void r7c6();
void r7c7();
void r7c8();
void r7c9();
void r7c10();
void r7c11();
void r7c12();


//row 8
void r8c0();
void r8c1();
void r8c2();
void r8c3();
void r8c4();
void r8c5();
void r8c6();
void r8c7();
void r8c8();
void r8c9();
void r8c10();
void r8c11();
void r8c12();

#endif //for COMMAND
