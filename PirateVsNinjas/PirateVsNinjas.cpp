// Kyle Lemons
// CSC275
// 1/30/24
// Last Edited: 1/31/24

#include <iostream>

using namespace std;

class Character {

    // Character class parameters
private:
    int health;

public:
    string name;

    // Constructor for character that sets the health and name of the character
    Character(int startHealth, string playerName) {
        health = startHealth;
        name = playerName;
    }

    // Getters and setters for the health parameter of the character class
    int getHealth() {
        return health;
    }

    void setHealth(int newHealth) {
        health = newHealth;
    }

};

class Pirate : public Character {

public:
    // Constructor for the pirate that sets the character parameters for the pirate
    Pirate(int health, string playerName) : Character(health, playerName) {

    }

    // Prints text to show the pirate swooshing the sword
    void useSword() {
        cout << "I am swooshing my sword!" << endl;
    }

};

class Ninja : public Character {

public:
    // Constructor for the ninja that sets the character parameters for the ninja
    Ninja(int health, string playerName) : Character(health, playerName) {

    }

    // Prints text to show the ninja throwing stars
    void throwStars() {
        cout << "I am throwing stars!" << endl;
    }

};

// Prints the intro to the game into console
void intro() {
    cout << "////////////////|\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
    cout << "/////// PIRATES VS NINJAS \\\\\\\\\\\\\\" << endl;
    cout << "---------------------------------" << endl;
}

int main()
{
    Pirate p1(10, "John Pirate");
    Ninja n1(8, "Ninja Satoshi");

    intro();

    cout << p1.name << " has " << p1.getHealth() << " health." << endl;
    cout << n1.name << " has " << n1.getHealth() << " health." << endl;

    p1.useSword();
    n1.throwStars();
}
