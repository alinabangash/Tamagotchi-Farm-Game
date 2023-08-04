#ifndef PETH
#define PETH

#include <string>
using namespace std;

class Pet{

protected:
//three common traits shared by all pet types 
int hunger; //stores the status of the pet’s hunger
int energy; //stores the status of the pet’s energy
int happy; //stores the status of the pet’s happiness

string name; //stores the name of the pet from user input


public:
void setName(string); //sets the pet’s name
void setHungry(int); //sets the pet’s hunger status 
void setHappy(int); //sets the pet’s happiness status
void setEnergy(int); //sets the pet’s energy status
string getName(); //returns name of pet
int getHungry(); //returns hunger status 
int getHappy(); //return happiness status
int getEnergy(); //returns energy status

//interactions with every pet
void FeedPet(); //increases hunger, happy, and decreases energy 
void PlayPet(); //increases happy and decreases energy, hunger 
void SleepPet(); //increases energy and decreases hunger, happy 

void nextHour(); 
virtual void Feelings() = 0;
virtual void Stats() = 0;






};
#endif