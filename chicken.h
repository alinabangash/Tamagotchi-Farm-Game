#ifndef CHICKENH
#define CHICKENH

#include <string>
#include "pet.h"

class Chicken : public Pet{
private:
int NumEggs = 0; //stores the number of eggs collected
string EggLevel; //stores the pet's "Egg Laying Level"

int val = 0;


public:
void CollectingEggs(); 
void setNumEggs(int);
int getNumEggs();
void setEggLevel(string);
string getEggLevel();


void Feelings(); 
void Stats(); 


};
#endif