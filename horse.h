#ifndef HORSEH
#define HORSEH

#include <string>
#include "pet.h"

class Horse : public Pet {
private:
int stamina = 0; //stores the status of the pet’s stamina

public:
void RidingHorse(); 
void setStamina(int);
int getStamina();

void Feelings(); 
void Stats(); 



};
#endif