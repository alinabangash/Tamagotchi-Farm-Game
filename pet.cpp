#include "pet.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void Pet::setName(string n){
  name = n;
}

void Pet::setHungry(int h){
  hunger = h;
} 
void Pet::setHappy(int ha){
  happy = ha;
}
void Pet::setEnergy(int e){
  energy = e;
}
string Pet::getName(){
  return name;
}
int Pet::getHungry(){
  return hunger;
} 
int Pet::getHappy(){
  return happy;
} 
int Pet::getEnergy(){
  return energy;
}

void Pet::FeedPet(){
  hunger = hunger + 10;
  happy = happy + 2;
  energy = energy - 2;

cout << "*****************************************************" << endl;
cout << name << " has been fed :)" << endl;
cout << "*****************************************************" << endl;
  
}
void Pet::PlayPet(){  
  hunger = hunger - 2;
  happy = happy + 10;
  energy = energy - 5;


cout << "*****************************************************" << endl;
cout << name << " has been played with :)" << endl;
cout << "*****************************************************" << endl;
  
}
void Pet::SleepPet(){ 
  hunger = hunger - 5;
  happy = happy - 2;
  energy = energy + 10;

cout << "*****************************************************" << endl;
cout << name << " has slept well :)" << endl;
cout << "*****************************************************" << endl;
  
}


void Pet::nextHour(){
  srand(time(0));
  int randomnum;
  randomnum = rand() % 10 + 1;

  hunger  = hunger - randomnum;
  happy = happy - randomnum;
  energy = energy - randomnum;

  
}

void Pet::Feelings(){
if (hunger <= 40){
  cout << "*****************************************************" << endl;
  cout << name << " is so hungry. Please feed! :( " << endl;
  cout << "*****************************************************" << endl;
  
}
else if (happy <= 20){
  cout << "*****************************************************" << endl;
  cout << name << " is so sad. Cheer " << name << "up!" << endl;
  cout << "*****************************************************" << endl;
  
}
else if (energy <= 30) {
  cout << "*****************************************************" << endl;
  cout << name << " is so tired. " << name << " needs a nap!" << endl;
  cout << "*****************************************************" << endl;
  
  
}
else if (hunger >= 80){
  cout << "*****************************************************" << endl;
  cout << name << " is not hungry :)" << endl;
  cout << "*****************************************************" << endl;
  
}

else if (happy >= 85){
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

void Pet::Stats(){
cout << "*****************************************************" << endl;
cout << "Happiness Level: " << happy << endl;
cout << "Hunger Level: " << hunger <<  endl;
cout << "Energy Level: " << energy << endl;
cout << "*****************************************************" << endl;
}
