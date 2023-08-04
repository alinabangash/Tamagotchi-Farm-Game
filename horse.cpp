#include "horse.h"
#include <iostream>
using namespace std;


void Horse::setStamina(int s){
    stamina = s;
}

int Horse::getStamina(){
  return stamina;
}


void Horse::RidingHorse(){
  energy = energy - 10;
  stamina = stamina + 20;
  hunger = hunger - 5;
  happy = happy + 5;

  cout << "*****************************************************" << endl;
  cout << "You are riding " << name << ". Yee-Haw!!" << endl;
  cout << "            .''       " << endl;
  cout << "  ._.-.___.' (`\      "<< endl;
  cout << " //(        ( `'      " << endl;
  cout << "'/ )\ ).__. )         " << endl;
  cout << "' <' `\ ._/'\         " << endl;
  cout << "   `   \     \        " << endl;
  cout << "*****************************************************" << endl;
  
  
}
void Horse::Feelings(){
if (hunger <= 20){
  cout << "*****************************************************" << endl;
  cout << name << " is so hungry. Please feed! :( " << endl;
  cout << "*****************************************************" << endl;
  
}
else if (happy <= 15){
  cout << "*****************************************************" << endl;
  cout << name << " is so sad. Cheer " << name << "up!" << endl;
  cout << "*****************************************************" << endl;
  
}
else if (energy <= 20) {
  cout << "*****************************************************" << endl;
  cout << name << " is so tired. " << name << " needs a nap!" << endl;
  cout << "*****************************************************" << endl;
  
  
}
else if (hunger >= 85){
  cout << "*****************************************************" << endl;
  cout << name << " is not hungry :)" << endl;
  cout << "*****************************************************" << endl;
  
}

else if (happy >= 80){
  cout << "*****************************************************" << endl;
  cout << name << " is so happy. YAY!" << endl;
  cout << "*****************************************************" << endl;
  
}

else if (energy >= 90){
  cout << "*****************************************************" << endl;
  cout << name << " is full of energy :)" << endl;
  cout << "*****************************************************" << endl;
  
}
}

void Horse::Stats(){
cout << "*****************************************************" << endl;
cout << "Happiness Level: " << happy << endl;
cout << "Hunger Level: " << hunger <<  endl;
cout << "Energy Level: " << energy << endl;
cout << "Stamina Level: " << stamina << endl;
cout << "*****************************************************" << endl;
}