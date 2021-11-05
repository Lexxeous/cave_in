/*
 Name: Alex Gibson
 Program Date: 12/14/2015
 Purpose: Provide the code necessary to allow functionality to functional prototypes
          defined in "command.h" for "caveIn.cpp".
 */

 /*
 Pseudocode:

 1. Write all code for "r0c0" function.
 2. Write all code for "r0c1" function.
 3. Write all code for "r0c2" function.
 ...
 n. Write all code for "rXcX" function.

 */

 /*
 Make sure to check that all syntax (punctuation, spacing, capitalization, etc...) is
 correct, or not.

 Make sure that the user's view of the program is easy to read, understand, and operate.
*/

//include necessary libraries
#include "command.h"

//specify namespace
using namespace std;

string
//strings
command,
heroName,
friend1,
friend2,
friend3;

bool
//tools
shovel = 0, //"Holes" is a great movie...hope i dont cut my hand open on this thing...
pickaxe = 0, //im gunna "minecraft" the shit outta this cave...
flashlight = 0, //wow...a useless fact that i know just became relevant, this is a "dyno torch". they were used by soldiers in WWII. they store energy for the bulb with a flywheel on the inside.
battery = 0, //how the hell would this battery work after being in a cave this long, i hope this doesnt create a plot-hole...
plasticShell = 0, //lets see if the battery works in this old flashlight shell...nope...that's what i thought...
crowbar = 0, //dang this thing is heavy..really hope i dont accidentally drop this on my toe...
lighter = 0, //i used to light my hand on fire when i was a kid playing witha lighter, germ-x, and axe body spray...dont judge me...
stickOfTNT = 0, //this will make a fantastic story...looks like i might HAVE to play with fire now...take that mom...pyrotechnics might save my life.
largePlank = 0, //huge wood inside a cave...there's a dirty joke there somewhere...
WD40 = 0, //wd-40 was invented in 1953
rustyKey = 0, //i remember learning about oxidation in school...just like mitochondria and the quadratic formula...amazing all the useless things i know...
rope = 0, //damn...this thing is pretty long...that's what she said...
hook = 0, //Arrgghhh matey...ye must walk the plank!!!
grapple = 0, //now i can latch onto things...like a spy or something...

//relics
starCoin = 0, //
bloodDiamond = 0,
sacrificialDagger = 0,

//obstacles
pileOfSand = 1, //plz no yellow spotted lizards....plz no yellow spotted lizards; they dont actually exist tho lol
pileOfDirt = 1, //ahhhh!!! its a snake!!! shit!!! NO!!!...NO...No...no...no...its a rope... i got scared of a rope...awesome...
r0c2PileOfRocks = 0,
r0c3PileOfRocks = 0,
r6c0weakWall = 0,
r7c11weakWall = 0,
stream = 0,
moss = 0,
gunpowderBarrels = 0,
gasBarrels = 0,
mineCarts = 0,
giantDrill = 0,
altarRoom = 0,
cultistBook = 0,
cultistNote = 0,
minersNote = 0,
minerNote = 0,

//friends
foundFriend1 = 0, //i got scared, i saw this door open and figured it would be safe inside...but after i "closed" it...it wouldnt open...luck right???
foundFriend2 = 0, //there you are...you jerk...nah...ill still like you when we get outta here...
foundFriend3 = 0; //woah...youre really in a pickle...actually youre in a hole bu-; shut up and get me outta here you idiot!!;


//define functions
void HELP()
{
    int userChoice;

    cout << endl; //for spacing
    cout << "Guidance Menu:" << endl;
    cout << "1. Command List" << endl;
    cout << "2. Full Items List" << endl;
    cout << "3. Inventory" << endl;
    cout << "4. Friends List" << endl;
    cout << "5. Objective" << endl;
    cout << "6. World Map" << endl;
    cout << "7. Exit Menu" << endl;
    cout << "What do you need HELP with?" << endl;
    cin >> userChoice;
    cout << endl; //for spacing

    switch(userChoice)
    {
        case 1:
            cout << "'HELP' - Shows the Guidence Menu." << endl;
            cout << "'INVENTORY' - Shows all the items currently on your person." << endl;
            cout << "'MAP' - Shows the world map." << endl;
            cout << "'SEARCH' - Searches the current room for any important items or knowledge." << endl;
            cout << "'USE' - Use an item of your choice to potentially perform a task in a room." << endl;
            cout << "'NORTH' - Travel north." << endl;
            cout << "'SOUTH' - Travel south." << endl;
            cout << "'EAST' - Travel east." << endl;
            cout << "'WEST' - Travel west." << endl;
            cout << endl; //for spacing
            break;
        case 2:
            cout << "1. Shovel" << endl;
            cout << "2. Pickaxe" << endl;
            cout << "3. Crank Flashlight" << endl;
            cout << "4. Battery" << endl;
            cout << "5. Plastic Shell" << endl;
            cout << "6. Crowbar" << endl;
            cout << "7. Lighter" << endl;
            cout << "8. Stick of TNT" << endl;
            cout << "9. Large Plank" << endl;
            cout << "10. WD-40" << endl;
            cout << "11. Rusty Key" << endl;
            cout << "12. Rope" << endl;
            cout << "13. Hook" << endl;
            cout << "14. Grapple" << endl;
            cout << "15. Star Coin" << endl;
            cout << "16. Blood Diamond" << endl;
            cout << "17. Sacrificial Dagger" << endl;
            cout << endl; //for spacing
            break;
        case 3:
            INVENTORY();
            break;
        case 4:
            FRIENDS();
            break;
        case 5:
            cout << "Your goal is to traverse the cavern maze, find all your friends, and not"
                 << " be lost forever." << endl;
            cout << "**There are a few secrets (Easter Eggs) along the way... see if you can"
                 << " find them all..." << endl;
            cout << endl; // for spacing
            break;
        case 6:
            MAP();
            break;
        case 7:
            cout << "Good luck!" << endl;
            cout << endl; //for spacing
            break;
        default:
            cout << "Invalid Selection, try again." << endl;
            HELP();
    }
}


void INVENTORY()
{
    int invSize = 17;
    bool invArray[] = {shovel, pickaxe, flashlight, battery, plasticShell, crowbar, lighter, stickOfTNT, largePlank, WD40, rustyKey, rope, hook, grapple, starCoin, bloodDiamond, sacrificialDagger};
    string invStringArray[] = {"Shovel", "Pickaxe", "Flashlight", "Battery", "Plastic Shell", "Crowbar", "Lighter", "Stick of TNT", "Large Plank", "WD-40", "Rusty Key", "Rope", "Hook", "Grapple", "Star Coin", "Blood Diamond", "Sacrificial Dagger"};
    cout << endl; //for spacing
    cout << "Here's what " << heroName << " has with them:" << endl;

    for(int i = 0; i < invSize; i++)
    {
       if(invArray[i] == true) //found this item
       {
            cout << i << ". " << invStringArray[i] << endl; //print the item
       }
       else if(invArray[i] == false) //havent found this item
       {
            cout << i << ". " << "x" << endl; //item is x'ed out
       }
    }
    cout << endl; //for spacing
}


void FRIENDS()
{
    bool foundFriendArray[] = {foundFriend1, foundFriend2, foundFriend3}; //found == true or false
    string friendArray[] = {friend1, friend2, friend3}; //names of friends
    cout << endl; //for spacing
    cout << heroName << " has rescued:" << endl;

    for(int i = 0; i < 3; i++)
    {
        if(foundFriendArray[i] == true) //found this friend
        {
            cout << i << ". " << friendArray[i] << endl; //print thier name
        }
        else if(foundFriendArray[i] == false) //havent found this friend yet
        {
            cout << i << ". " << "x" << endl; //name is x'ed out
        }
    }
    cout << endl; //for spacing
}


void MAP()
{
    cout << endl; //for spacing
    cout << "WORLD MAP:_______________________________________________________________________________________" << endl;
    cout << "     |__00__|__01__|__02__|__03__|__04__|__05__|__06__|__07__|__08__|__09__|__10__|__11__|__12__|" << endl;
    cout << "  00 |      |      |      |      |      |      |      |      |##### |      |      |      | Exit |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|######|______|______|______|______|" << endl;
    cout << "  01 |      |      |Spawn |      |      |      |      |      |  ##  |      |      |      |      |" << endl;
    cout << "     |______|______|Point_|______|______|______|______|______|  ##  |______|______|______|______|" << endl;
    cout << "  02 |      |      |      |      |      |      |      |      |######|      |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|######|______|______|______|______|" << endl;
    cout << "  03 |      |      |      |      |      |      |      |    ==ıı=ıı##|      |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|____==|ıı=ıı#|______|______|______|______|" << endl;
    cout << "  04 |      |      |      |      |      |      |      |      |#ıı=ıı|==    |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|##ıı=ıı==____|______|______|______|" << endl;
    cout << "  05 |      |      |      |      |      |      |      |      |######|      |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|######|______|______|______|______|" << endl;
    cout << "  06 |      |      |      |      |      |      |      |      |######|      |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|######|______|______|______|______|" << endl;
    cout << "  07 |      |      |      |      |      |      |      |      |######|      |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|######|______|______|______|______|" << endl;
    cout << "  08 |      |      |      |      |      |      |      |      |######|      |      |      |      |" << endl;
    cout << "     |______|______|______|______|______|______|______|______|######|______|______|______|______|" << endl;
}


void CULTISTBOOK()
{
    cout << " _____________________________________________       " << endl;
    cout << "| July 9, 1957                               |       " << endl;
    cout << "|                                            \\       " << endl;
    cout << "|   I, Madame Serpente Servus write a testimon\\      " << endl;
    cout << "| in service to our Father, Lord, and Creator: \\__  " << endl;
    cout << "| Satan! To Him be the power and the Glory. Amen.  \\" << endl;
    cout << "|   In 1948, Herbert Arthur Sloane began a glorious |" << endl;
    cout << "| revolution; the coven of Endor. I recognize       |" << endl;
    cout << "| brother Sloane for leading me to the wonderful    |" << endl;
    cout << "| might of Satan, however, he did not commit his    |" << endl;
    cout << "| heart to the Dark Master as well as he could have.|" << endl;
    cout << "| When Sloane relocated to Indiana on Dec. 1 1957,  |" << endl;
    cout << "| Diablo blessed me with a vision of virgin         |" << endl;
    cout << "| sacrifice, summoning, and self-mutilation worship |" << endl;
    cout << "| as ways to further my devotion to Him. Through    |" << endl;
    cout << "| obedience to my Angel of Light I also relocated;  |" << endl;
    cout << "| I moved south to find another home for The King   |" << endl;
    cout << "| of Darkness.      _____________                   |" << endl; //right side of book
    cout << "|                  /\\ \\       / /\\                  |" << endl;
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|                       \\ V /                   1.  |" << endl; //may you bring death to my enemies; destruction to the non-believers.
    cout << "|__________________________________________/\\_______|" << endl; //may the Beast in me please You oh great leviathan who came before me

    cout << "Press ENTER to continue..." << endl; //pause
    getchar();
    getchar();

    cout << " ___________________________________________________ " << endl;
    cout << "|          /57                                      |" << endl;
    cout << "|         /                                         |" << endl;
    cout << "|       /        Dies irae, dies illa.              |" << endl;
    cout << "|     /       Solvet Saeclum in favilla;            |" << endl;
    cout << "|    /              Teste e ignis,                  |" << endl; //chant page in latin
    cout << "|   /       Quantos tremor it est futurus.          |" << endl; //folded over as to be referenced often
    cout << "| /           Vindex pecus est venturus,            |" << endl;
    cout << "|/            Omnes qui potens Dominus!             |" << endl;
    cout << "|                Dies irae, dies illa.              |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|              Splendor lucis aeternae,             |" << endl;
    cout << "|              Et Lucifer justitae: veni            |" << endl;
    cout << "|          et illumine sedentes in tenebris.        |" << endl;
    cout << "|                  Et umbra mortis.                 |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                   _____________                   |" << endl;
    cout << "|                  /\\ \\       / /\\                  |" << endl;
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|  16.                  \\ V /                       |" << endl;
    cout << "|_____________/\\____________________________________|" << endl; //left side of book

    cout << "Press ENTER to continue..." << endl; //pause
    getchar();

    cout << " ___________________________________________________ " << endl;
    cout << "|          /57                                      |" << endl;
    cout << "|         /                                         |" << endl;
    cout << "|       /      Sanctus Satanas, Sanctus;            |" << endl;
    cout << "|     /        Dominus Diabolus Sabaoth.            |" << endl;
    cout << "|    /             Satanas - venire!                |" << endl; //chant page in latin
    cout << "|   /              Satanas - venire!                |" << endl; //folded over as to be referenced often
    cout << "| /           Ave, Satanas, ave Satanas.            |" << endl;
    cout << "|/                  caelis est Tua,                 |" << endl;
    cout << "|                   terra est Tua,                  |" << endl;
    cout << "|                    Ave Satanas!                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                   _____________                   |" << endl;
    cout << "|                  /\\ \\       / /\\                  |" << endl;
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|  20.                  \\ V /                       |" << endl;
    cout << "|_____________/\\____________________________________|" << endl; //left side of book

    cout << "Press ENTER to continue..." << endl; //pause
    getchar();

    cout << " ___________________________________________________ " << endl;
    cout << "|        /1958                                      |" << endl;
    cout << "|       /                                           |" << endl;
    cout << "|     /                                             |" << endl;
    cout << "|   /                                               |" << endl;
    cout << "|  /                                                |" << endl;
    cout << "| /                                                 |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl; //need a maniacal satanic gospel
    cout << "|                                                   |" << endl; //the true lord of this world delights in blood
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                   _____________                   |" << endl;
    cout << "|                  /\\ \\       / /\\                  |" << endl;
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|  28.                  \\ V /                       |" << endl;
    cout << "|_____/\\____________________________________________|" << endl; //left side of book

    cout << "Press ENTER to continue..." << endl; //pause
    getchar();

    cout << " ___________________________________________________ " << endl;
    cout << "| August 4, 1958                          \\         |" << endl;
    cout << "|                                          \\        |" << endl;
    cout << "|                                            \\      |" << endl;
    cout << "|                                             \\     |" << endl;
    cout << "|                                               \\   |" << endl;
    cout << "|                                                \\  |" << endl;
    cout << "|                                                  \\|" << endl;
    cout << "|                                                   |" << endl; // how to perform sacrifice, etc...
    cout << "|                                                   |" << endl; // this dagger is blessed by our
    cout << "|                                                   |" << endl; // master, there is none other
    cout << "|                                                   |" << endl; // that we posses can properly satisfy
    cout << "|                                                   |" << endl; // his thirst for blood
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                   _____________                   |" << endl;
    cout << "|                  /\\ \\       / /\\                  |" << endl;
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|                       \\ V /                  35.  |" << endl;
    cout << "|_________________________________________________/\\|" << endl; //right side of book

    cout << "Press ENTER to continue..." << endl; //pause
    getchar();

    cout << " ____________________________________________        " << endl;
    cout << "| March 29, 1960                            |        " << endl;
    cout << "|                                            \\       " << endl;
    cout << "|                                              \\     " << endl;
    cout << "|                                               |    " << endl;
    cout << "|                                               /    " << endl;
    cout << "|                                               \\_   " << endl;
    cout << "|                                                 |  " << endl;
    cout << "|                                                  \\ " << endl; //we were supposed to do a virgin sacrifice tommorow
    cout << "|                                                   |" << endl; //but i suppose revenge on our ememies will do.
    cout << "|                                                   |" << endl; //we do not know exaclty when the dagger was stolen
    cout << "|                                                   |" << endl; //we could have gone days without noticing it...
    cout << "|                                                   |" << endl; //need acts of revenge against the inbreds that stole the holy dagger
    cout << "|                                                   |" << endl; //until it's retrieved, we can no longer rip flesh in His name
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl; //until every soul here is taken for Your glory, we will not stop.
    cout << "|                                                   |" << endl; //so our decendents can know our tale:
    cout << "|                   _____________                   |" << endl; //there will be a scout here at all times, waiting for one of them
    cout << "|                  /\\ \\       / /\\                  |" << endl; //to fuck up. Then is our perfect time to act.
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|                       \\ V /                  66.  |" << endl;
    cout << "|___________________________________________________|" << endl;

    cout << "Press ENTER to continue..." << endl; //pause
    getchar();
}


void CULTISTNOTE()
{
    cout << " ____  _______________________                       " << endl;
    cout << "| Apr\\/ 15, 1960              |                      " << endl;
    cout << "|                              \\                     " << endl;
    cout << "|                               |                    " << endl;
    cout << "|                               /                    " << endl;
    cout << "|                               \\                    " << endl;
    cout << "|                                |___                " << endl;
    cout << "|      AENDOR TRADEBAT.              \\               " << endl; //endor betrayed
    cout << "|                                     |__/\\          " << endl;
    cout << "|                AVE SATANAS!              \\         " << endl; //hail satan
    cout << "|                                           \\        " << endl;
    cout << "|                                            \\       " << endl;
    cout << "|                                             \\____  " << endl;
    cout << "|                                                  \\ " << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                   _____________                   |" << endl;
    cout << "|                  /\\ \\       / /\\                  |" << endl;
    cout << "|                 /  \\   \\ /   /  \\                 |" << endl;
    cout << "|                /   \\  /_|_\\  /   \\                |" << endl;
    cout << "|               /    /\\   |   /\\    \\               |" << endl;
    cout << "|              /  /____\\_____/____\\  \\              |" << endl;
    cout << "|               \\      \\     /      /               |" << endl;
    cout << "|                 \\     \\   /     /                 |" << endl;
    cout << "|                    \\   \\ /   /                    |" << endl;
    cout << "|                       \\ V /      _____/\\  DCLXVI  |" << endl; //666
    cout << "|_________________________________/       \\_________|" << endl;
}


void MINERNOTE()
{
    cout << " ___________________________________________________ " << endl;
    cout << "| April 15, 1960                                    |" << endl;
    cout << "|                                                   |" << endl; //i feel like it was a bad idea for us to steal that dagger...
    cout << "|                                                   |" << endl; //people are telling me that my friends and co-workers
    cout << "|                                                   |" << endl; //over the past 2 weeks they are "dissapearing" one by one...
    cout << "|                                                   |" << endl; //but i know whats really going on here
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl; //soon im gunna come to the mine late at night to exact revenge
    cout << "|                                                   |" << endl; //on these evil bastards, ill be prepared and ill
    cout << "|                                                   |" << endl; //catch them off guard
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl; //i grow more fearful yet more enraged for every day that passes...
    cout << "|                                                   |" << endl; //tonight is the night i kill Satan's childeren. april 15 1960
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|___________________________________________________|" << endl;
}


void MINERSNOTE()
{
    cout << " ___________________________________________________ " << endl; //something about jones' witness story
    cout << "| March 24, 1960                                    |" << endl; //them not knowing what to do and then
    cout << "|                                                   |" << endl; //taking action by stealing the dagger
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl; //we hid the key far away from the lock box
    cout << "|                                                   |" << endl; //in hopes that they wouldnt find it
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                                                   |" << endl;
    cout << "|___________________________________________________|" << endl;
}


void intro()
{
    cout << heroName << " -- 'Oooohhh... my... h-head. I must have hit it on a rock on the way down... Gggahhh..."
    << " W-well, at least I didn't break anything...b-but how the hell am I gunna get outta here?!"
    << " I gotta... aahhh... find my f-friends!!!"
    << " Looks like some of these old, crude electric lamps are s-still functinal...*sigh*...let's see"
    << " if I can find anything useful in this crap-hole...'" << endl;
    cout << "Press ENTER to continue..." << endl;
    getchar(); //pause
    cout << "At any time during the game, enter the command 'HELP' to bring up the guidence menu." << endl;
    cout << "Press ENTER to continue..." << endl;
    getchar(); //pause
    cout << "Enter a command to begin " << heroName << "'s journey." << endl;

    cin >> command;
    if(command  == "altar")
    {
        r0c0();
    }
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r1c2(); //spawn point
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r1c2(); //spawn point
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r1c2(); //spawn point
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        int r1c2SearchVal = rangeRandomInt(0,30);
        if(r1c2SearchVal >= 0 && r1c2SearchVal <= 9)
        {
            cout << heroName << " -- 'There is nothing useful here, well... that's a lie... I'm actually really lucky" << endl;
            cout << "that a lot of these lights are still working; I wouldnt be able to see a thing if they weren't..." << endl;
            cout << "That would suck...'" << endl; //thankful for the light
        }
        else if(r1c2SearchVal > 9 && r1c2SearchVal <= 19)
        {
            cout << heroName << " -- 'This is the room that started in...or fell into...whatever...same thing...'" << endl;
            //this is the room i started in
        }
        else
        {
            cout << heroName << " -- 'This is where I woke up after " << friend2 << " tried to kill us all...'" << endl;
            //this is where i landed after friend2 tried to kill us all...
        }
        cout << "There is nothing useful in this room." << endl;
        cout << endl; //for spacing
        r1c2(); //spawn point
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r1c2(); //spawn point
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
        r0c2();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r2c2();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r1c3();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r1c1();
    }
    else
    {
        cout << "Invalid command. Type 'HELP' for more information." << endl;
        r1c2();
    }

}


//row 0
void r0c0()
{
    string response;
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r0c0(); //altar room
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory")
    {
        INVENTORY();
        r0c0(); //altar room
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r0c0(); //altar room
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        if(altarRoom == 0) //havent been here yet
        {
            cout << heroName << " -- 'The room smells like...wax...probably from all these freakin candles..." << endl;
            cout << "There are a buncha old books and tomes; some of them are ripped, singed, or blood-stained...or all 3..." << endl;
            cout << "There's also a crude wooden...altar it seems...there are straps along the sides...and the top looks like a \"nice\" place to lay down...'" << endl;
            cout << endl; //for spacing

            cout << "You see a large gemstone covered in blood. Do you want to take it? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                cout << "You put the blood diamond in your inventory." << endl;
                bloodDiamond = 1; //you have the diamond
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the blood diamond on the altar." << endl;
            }
            else
            {
                cout << "Invalid response." << endl;
            }

            cout << "You see a gold plated book on a pedestal; it looks special. Do you want to read it? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                CULTISTBOOK();
                cultistBook = 1; //you have read the book already
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the book on the pedestal." << endl;
            }
            else
            {
                cout << "Invalid Response." << endl;
            }
            altarRoom = 1; //been here already
        }
        else if(altarRoom == 1 && cultistBook == 0 && bloodDiamond == 0) //been here already and not read the cultistBook or taken the bloodDiamond
        {
            cout << heroName << " -- 'This altar is really creepy...like some sort of torture device...'" << endl;
            cout << endl; //for spacing

            cout << "You see a large gemstone covered in blood. Do you want to take it? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                cout << "You put the blood diamond in your inventory." << endl;
                bloodDiamond = 1; //you have the diamond
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the blood diamond on the altar." << endl;
            }
            else
            {
                cout << "Invlaid response." << endl;
            }

            cout << "You see a gold plated book on a pedestal; it looks special. Do you want to read it? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                CULTISTBOOK();
                cultistBook = 1; //you have read the book already
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the book on the pedestal." << endl;
            }
            else
            {
                cout << "Invalid response." << endl;
            }
        }
        else if(altarRoom == 1 && cultistBook == 1 && bloodDiamond == 0) //been here and read the cultistBook but not taken the bloodDiamond
        {
            cout << heroName << " -- 'I can't believe that a satanic cult worshipped in a coal mine for almost 3 years without any of the workers noticing..." << endl;
            cout << "And practiced virgin sacrifice?!?! That's just all kinds of messed up...'" << endl;
            cout << endl; //for spacing

            cout << "You see a large gemstone covered in blood. Do you want to take it? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                cout << "You put the blood diamond in your inventory." << endl;
                bloodDiamond = 1; //you have the diamond
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the blood diamond on the altar." << endl;
            }
            else
            {
                cout << "Invalid response." << endl;
            }

            cout << "Would you like to read the cultist book agin? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                CULTISTBOOK();
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the book on the pedestal." << endl;
            }
            else
            {
                cout << "Invalid response." << endl;
            }
        }
        else if(altarRoom == 1 && cultistBook == 0 && bloodDiamond == 1) //been here and not read the book and taken the bloodDiamond
        {
            cout << heroName << " -- 'To be honest, this blood diamond thing is kinda gross...'" << endl;
            cout << endl; //for spacing

            cout << "You see a gold plated book on a pedestal; it looks special. Do you want to read it? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                CULTISTBOOK();
                cultistBook = 1; //you have read the book already
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the book on the pedestal." << endl;
            }
            else
            {
                cout << "Invalid response." << endl;
            }
        }
        else if(altarRoom == 1 && cultistBook == 1 && bloodDiamond == 1) //been here read the book and have the bloodDiamond
        {
            cout << heroName << " -- 'It's crazy all the rituals and shit that went on in this room..." << endl;
            cout << endl; //for spacing

            cout << "Would you like to read the cultist book again? (YES/NO)" << endl;
            cin >> response;
            if(response == "Yes" || response == "YES" || response == "yes")
            {
                CULTISTBOOK();
            }
            else if(response == "No" || response == "NO" || response == "no")
            {
                cout << "You leave the book on the pedestal." << endl;
            }
            else
            {
                cout << "Invalid response." << endl;
            }
        }

        r0c0(); //altar room
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r0c0(); //altar room
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r0c0(); //altar room
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << "You can't go that way." << endl;
        r0c0(); //altar room
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r0c1();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << "You can't go that way." << endl;
        r0c0(); //altar room
    }
    else
    {
        cout << "Invalid command." << endl;
        r0c0(); //altar room
    }
}



void r0c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r0c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search") //theres a pile of rocks in the west part of the room that looks out of place...hero--is that a hole?
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r0c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search") //you see a pile of rocks...oddly enough, it seems like the shouldnt be here...
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r0c4() //DONE
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r0c4();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r0c4();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r0c4();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r0c4();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r0c4();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r0c4();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r1c4();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << "You can't go that way." << endl;
        r0c4();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r0c3();
    }
    else
    {
        cout << "Invalid command." << endl;
        r0c4();
    }
}



void r0c5() //DONE
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r0c5();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r0c5();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r0c5();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r0c5();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r0c5();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r0c5();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r1c5();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r0c6();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << "You can't go that way." << endl;
        r0c5();
    }
    else
    {
        cout << "Invalid command." << endl;
        r0c5();
    }
}



void r0c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
    //barrels of gunpowder, good to keep far away from the gas barrels
    //miners must have sometimes used crowbar to get barrels open
    //get crowbar if not already have the other one
    //if have other one, oh look another crowbar...

}



void r0c7()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r0c7();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r0c7();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r0c7();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r0c7();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r0c7();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r0c7();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r1c7();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r0c8();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r0c6();
    }
    else
    {
        cout << "Invalid command." << endl;
        r0c7();
    }
}



void r0c8()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r0c8();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r0c8();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r0c8();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << heroName << " -- 'There's a HUGE fracture in the gound here; it continues south of here." << endl;
        cout << "The lighting isnt good here...I can't see the other side.'";
        r0c8();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r0c8();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r0c8();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << "You can't go that way."  << endl;
        r0c8();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " -- 'If I go that way I could fall and kill myself..."  << endl;
        cout << "Let's not do that...'" << endl;
        r0c8();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r0c7();
    }
    else
    {
        cout << "Invalid command." << endl;
        r0c8();
    }
    //from the west side...looks like a huge fracture in the ground...cant even see the bottom...looks like a bag on a ledge on the far side, lighting is not good here
    //from the east side: note from a worker:
    //i think stealing that dagger may have been a bad idea, we may have pissed, whoever they are, off. im more fearful for my life cuz my friends have been
    //"dissapearing"
    //note from the cultist killer:
    //Aendor tradebat. Grandinem Satanas!
}



void r0c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r0c10()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r0c10();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r0c10();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r0c10();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r0c10();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r0c10();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r0c10();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r1c10();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r0c11();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r0c9();
    }
    else
    {
        cout << "Invalid command." << endl;
        r0c10();
    }
}



void r0c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r0c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 1
void r1c0()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r1c0();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r1c0();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r1c0();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r1c0();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r1c0();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
        r1c0();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r2c0();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r1c1();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r1c0();
    }
    else
    {
        cout << "Invalid command." << endl;
        r1c0();
    }
}



void r1c1()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r1c1();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r1c1();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r1c1();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r1c1();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r1c1();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << "You can't go that way." << endl;
        r1c1();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r2c1();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r1c2();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r1c1();
    }
    else
    {
        cout << "Invalid command." << endl;
        r1c1();
    }
}



void r1c2()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r1c2(); //spawn point
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r1c2(); //spawn point
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r1c2(); //spawn point
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        int r1c2SearchVal = rangeRandomInt(0,30);
        if(r1c2SearchVal >= 0 && r1c2SearchVal <= 9)
        {
            cout << heroName << " -- 'There is nothing useful here, well... that's a lie... I'm actually really lucky" << endl;
            cout << "that a lot of these lights are still working; I wouldnt be able to see a thing if they weren't..." << endl;
            cout << "That would suck...'" << endl;
        }
        else if(r1c2SearchVal > 9 && r1c2SearchVal <= 19)
        {
            cout << heroName << " -- 'This is the room that started in...or fell into...whatever...same thing...'" << endl;
            //hey!!! this is the room i started in
        }
        else
        {
            cout << heroName << " -- 'This is where I woke up after " << friend2 << " tried to kill us all...'" << endl;
            //this is where i landed after friend2 tried to kill us all...
        }
        cout << "There is nothing useful in this room." << endl;
        cout << endl; //for spacing
        r1c2(); //spawn point
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r1c2(); //spawn point
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
        r0c2();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
        r2c2();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r1c3();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r1c1();
    }
    else
    {
        cout << "Invalid command." << endl;
        r1c2();
    }
}



void r1c3()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r1c3();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r1c3();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r1c3();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "There is nothing useful here." << endl;
        r1c3();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r1c3();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
        r0c3();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << "You can't go that way." << endl;
        r1c3();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r1c4();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r1c2();
    }
    else
    {
        cout << "Invalid command." << endl;
        r1c3();
    }
}



void r1c4()
{
    cin >> command;
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
        r1c4();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
        r1c4();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
        r1c4();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        if (plasticShell == 0) //if flashlight shell is NOT in inventory
        {
            string response;
            cout << "You see a cracked plastic flashlight shell on the ground. Do you want to take it? (YES/NO)" << endl;
            cin >> response;
            if (response == "Yes" || response == "YES" || response == "yes")
            {
                plasticShell = 1;
                cout << heroName << " -- 'There's a slot to insert a...uh...AA battery.'" << endl;
            }
            else //if flashlight shell is in inventory
            {
                cout << "You leave the plastic flashlight shell on the ground." << endl;
            }
        }
        else
        {
            cout << "There is nothing useful in this room." << endl;
        }
        r1c4();
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "There is nothing to do in this room." << endl;
        r1c4();
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
        r0c4();
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << "You can't go that way." << endl;
        r1c4();
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
        r1c5();
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
        r1c3();
    }
    else
    {
        cout << "Invalid command." << endl;
        r1c4();
    }
}



void r1c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r1c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r1c7()
{
   if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r1c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
    //looks like there used to be a bridge here...
    //plank = 0; no cross.
    //plank = 1;
    //find friend2; set plank = 0; foundFriend2 = 1
    //can go back to room if you missed pickaxe if(plank = 0 && foundFriend2 = 1)
}



void r1c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r1c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r1c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r1c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 2
void r2c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
    //bout 20-30 feet across...
}



void r2c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r2c12()
{
   if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 3
void r3c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r3c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 4
void r4c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r4c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 5
void r5c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r5c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 6
void r6c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
    //found a note written by the miners:
    //they found this altar and dagger, didnt know what to do, kept it a secret, and piled rocks over the crawling hole to keep others from finding it
    //jones was slept here drunk one night after a fight with his wife at home and camped out west of the northern minecarts
    //when he heard noises like rocks moving and, later, chanting, he went to investigate
    //seeing a teenage girl gagged and bound to a crude altar, people in black and red robes "sacrificed" her with this hellish looking dagger...
    //horrified by what he saw, he stumbled back to his sleeping bag by the minecarts and recorded what he witnessed.
    //when jones told us what had happened, none of us believed him, but when he showed us the altar...we believed him...
    //so we stole thier dagger so that it would make it more difficult to "properly" sacrifice innocent people.

}



void r6c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r6c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 7
void r7c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r7c12()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}


//row 8
void r8c0()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c1()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c2()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c3()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c4()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c5()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c6()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c7()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c8()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
    //dont continue without light or you might fall and die
}



void r8c9()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c10()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c11()
{
    if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}



void r8c12()
{
   if(command == "Help" || command == "HELP" || command == "help")
    {
        HELP();
    }
    else if(command == "Inventory" || command == "INVENTORY" || command == "inventory" )
    {
        INVENTORY();
    }
    else if(command == "Map" || command == "MAP" || command == "map")
    {
        MAP();
    }
    else if(command == "Search" || command == "SEARCH" || command == "search")
    {
        cout << "searhcing" << endl;
    }
    else if(command == "Use" || command == "USE" || command == "use")
    {
        cout << "using" << endl;
    }
    else if(command == "North" || command == "NORTH" || command == "north")
    {
        cout << heroName << " travels north." << endl;
    }
    else if(command == "South" || command == "SOUTH" || command == "south")
    {
        cout << heroName << " travels south." << endl;
    }
    else if(command == "East" || command == "EAST" || command == "east")
    {
        cout << heroName << " travels east." << endl;
    }
    else if (command == "West" || command == "WEST" || command == "west")
    {
        cout << heroName << " travels west." << endl;
    }
    else
    {
        cout << "Invalid command." << endl;
    }
}
