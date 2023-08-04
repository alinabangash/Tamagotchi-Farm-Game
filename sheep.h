#ifndef SHEEPH
#define SHEEPH

#include <string>
#include "pet.h"

class Sheep : public Pet{
private:
int Wool = 0;   //stores the amount of wool collected 
string WoolLevel; //stores the pet's "Wool Bearing Level"
int num = 0;


public:
void Shearing();
void setWool(int);
int getWool();
void setWoolLevel(string);
string getWoolLevel();



void Feelings(); 
void Stats(); 
};
#endif