/*
 Name: Jonathan Alexander Gibson
 Program Date: 12/14/2015
 Program Purpose: Write all intro code for the game.
*/

/*
 Pseudocode:
 1. Write all intro text with full context.
 2. Call the intro() function.
 3.
 4.
 5.
*/

/*
 Make sure to check that all syntax (punctuation, spacing, capitalization, etc...) is
 correct, or not.
 Make sure that the user's view of the program is easy to read, understand, and use.
*/

//including necessary libraries
#include "command.h"

//specify namespace
using namespace std;

//declare function
int main ()
{
  cout << endl; //for spacing
  cout << "Today we join a group of hikers off on a leisurely stroll through the woods." << endl; //intro
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "What would you like to call the leader of the group?:" << endl;
  getline(cin, heroName, '\n');
  cout << endl; //for spacing
  cout << "Suddenly, " << heroName << " saw something off in the distance..." << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << heroName << " has 3 friends tagging along." << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "What would you like to call 'Friend 1'?:" << endl;
  getline(cin, friend1, '\n');
  cout << "What would you like to call 'Friend 2'?:" << endl;
  getline(cin, friend2, '\n');
  cout << "What would you like to call 'Friend 3'?:" << endl;
  getline(cin, friend3, '\n');
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << heroName << " calls to " << friend1 << ", " << friend2 << ", and " << friend3 << " to go investigate what he/she saw..." << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "As the group gets closer, they notice that what " << heroName << " saw was an abandoned coal mine." << endl;
  cout << "Curiously, they go exploring..." << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "Once inside, they see all kinds of interesting work equipment:" << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "Immediately, " << friend2 << " grabs a pickaxe, starts swinging it around, and sings:";
  cout << "'I've been working on the railroad...ALL THE LIVE LONG DAY!!!'" << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << friend2 << " accidentally hits a wooden support beam while carelessly swinging the pickaxe around..." << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "The beam nearly snaps in half!!!" << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << friend3 << " whispers:";
  cout << "'Phew...that was close...let's get outta here...'" << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "Suddenly, the beam's two halves collapse violently to the massive weight of the cave!!!" << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << "Rocks fall, the ground breaks, and the whole group, one after another, goes tumbling down into the coal filled ";
  cout << "abyss of the mine..." << endl;
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  cout << heroName << " wakes up alone, surrounded by darkness, and lost in a cold, massive, underground maze...";
  cout << "Press ENTER to continue..." << endl; //pause
  getchar();

  intro();
}
