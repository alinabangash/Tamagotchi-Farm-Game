#include "sheep.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void Sheep::setWool(int w){
  Wool = w;
}

int totalnum = 0;
int Sheep::getWool(){

  if (num == 2){
    srand(time(0));
    Wool = rand() % 3 + 1;
  
    totalnum = totalnum + Wool;
    return totalnum;
  }
  else if (num == 1){
    return totalnum;
  }
}

void Sheep::setWoolLevel(string wl){
  WoolLevel = wl;
}


string Sheep::getWoolLevel(){

  if (getWool() < 8 ){
    WoolLevel = "Beginner Sheep";
  }
  else if ( (getWool() >= 8) && (getWool() < 16)  ){
    WoolLevel = "Intermediate Sheep";
  }
  else if ( (getWool() >= 16) && (getWool() < 24)  ){
    WoolLevel = "Advanced Sheep";
  }
  else if (getWool() >= 24){
    WoolLevel = "Expert Sheep";
  }
  
  return WoolLevel;
}



void Sheep::Shearing(){

  num = 2;

cout << "*****************************************************" << endl;
cout << "You are shearing " << name << ". Collect the Wool!" << endl;
cout << endl;
cout << "            .--.                " << endl;
cout << "           <|00/>~~~~~~~~\__            " << endl;
cout << " ~bzz~      |_/( ' , )  ).)V          " << endl;
cout << "    |--|E       \. ( ')  ,)          "<< endl;
cout << "                |[/~~~|[/              "<< endl;
cout << "                ^      ^               "<< endl;
cout << endl;
cout << "You have a total of " << getWool()  << " pounds of wool!"<< endl;
cout << "*****************************************************" << endl;
  
  
}


void Sheep::Feelings(){
if (hunger <= 18){
  cout << "*****************************************************" << endl;
  cout << name << " is so hungry. Please feed! :( " << endl;
  cout << "*****************************************************" << endl;
  
}
else if (happy <= 20){
  cout << "*****************************************************" << endl;
  cout << name << " is so sad. Cheer " << name << "up!" << endl;
  cout << "*****************************************************" << endl;
  
}
else if (energy <= 23) {
  cout << "*****************************************************" << endl;
  cout << name << " is so tired. " << name << " needs a nap!" << endl;
  cout << "*****************************************************" << endl;
  
  
}
else if (hunger >= 88){
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

void Sheep::Stats(){

num = 1;

cout << "*****************************************************" << endl;
cout << "Happiness Level: " << happy << endl;
cout << "Hunger Level: " << hunger <<  endl;
cout << "Energy Level: " << energy << endl;
cout << "Wool Bearing Level: " << getWoolLevel() << endl;
cout << "*****************************************************" << endl;
}