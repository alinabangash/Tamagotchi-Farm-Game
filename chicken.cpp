#include "chicken.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Chicken::setNumEggs(int e){
  NumEggs = e;
}

int total = 0;
int Chicken::getNumEggs(){

  if (val == 2){
    srand(time(0));
    NumEggs = rand() % 4 + 1;
  
    total = total + NumEggs;
    return total;
  }
  else if (val == 1){
    return total; 
  }
}

void Chicken::setEggLevel(string l){
  EggLevel = l;
}

string Chicken::getEggLevel(){
  
  if (getNumEggs() < 6 ){
    EggLevel = "Beginner Chicken";
    }
  else if ( (getNumEggs() >= 6) && (getNumEggs() < 12)  ){
  EggLevel = "Intermediate Chicken";
  }
  else if ( (getNumEggs() >= 12) && (getNumEggs() < 20)  ){
  EggLevel = "Advanced Chicken";
  }
  else if (getNumEggs() >= 20){
  EggLevel = "Expert Chicken";
  }

  return EggLevel;
}
void Chicken::CollectingEggs(){
val = 2;
cout << "*****************************************************" << endl;
cout << "You are collecting eggs from " << name << endl;
cout << endl;
cout << "                    //			" << endl;       
cout << " ww_          ___.///			" << endl;    
cout << "o__ `._.-'''''    //			  " << endl;   
cout << "|/  \   ,     /   //			  " << endl;   
cout << "     \  ``,,,' _//			    " << endl;  
cout << "      `-.  \--'   .'`.			" << endl;  
cout << "         \_/_/    `.,'			" << endl; 
cout << "         \\\\				      " << endl;
cout << "        ,,','`             " << endl;
cout << endl; 
cout << "You now have a total of " << getNumEggs() << " eggs!"<< endl;
cout << "*****************************************************" << endl;

  
}

void Chicken::Feelings(){
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

else if (happy >= 90){
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



void Chicken::Stats(){

val = 1;
cout << "*****************************************************" << endl;
cout << "Happiness Level: " << happy << endl;
cout << "Hunger Level: " << hunger <<  endl;
cout << "Energy Level: " << energy << endl;
cout << "Egg Laying Level: " << getEggLevel() << endl;
cout << "*****************************************************" << endl;
}