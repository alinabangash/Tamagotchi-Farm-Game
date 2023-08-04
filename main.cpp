#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "pet.h"
#include "horse.h"
#include "chicken.h"
#include "sheep.h"
using namespace std;

int main() {
  
string PetName;
int PetNum;
int NeworNot; //create a new pet or load an old one

cout << "*****************************************************" << endl;
cout << "Would you like to create a new pet or load an existing one?" << endl;
cout << "Enter your choice: " << endl;
cout << "1) Create a New Pet" << endl;
cout << "2) Load an Existing Pet" << endl;
cout << "*****************************************************" << endl;

cin >> NeworNot;
cout << endl;
  
if (NeworNot == 2){
string info;
cout << "*****************************************************" << endl;
cout << "Enter the filename of the existing pet: " << endl;

string filename;
cin >> filename;

ifstream fin(filename);
while (!fin.is_open()){
  cout << "The filename is incorrect or not found" << endl;
  cout << "Enter the filename of the existing pet: " << endl;
  cin >> filename;
}

if (fin.is_open()){
  while (getline(fin, info)){

      cout << info;
      cout << endl;  
  }
  cout << "*****************************************************" << endl;
  fin.close();
}
}

if (NeworNot == 1){
cout << "*****************************************************" << endl;
cout << "Welcome to Old Macdonald's Farm :D" << endl;
cout << "Please select one of Old Macdonald's pets!" << endl;
cout << "1) Horse" << endl;
cout << "The Horse is very energetic and likes to be ridden!" << endl;
cout << endl;
  
cout << "                           _(\_/)          " << endl;
cout << "                         ,((((^`\          " << endl;
cout << "                        ((((  (O \         " << endl;
cout << "                      ,((((( ,    \        " << endl;
cout << "  ,,,_              ,(((((  /'._  ,`,      " << endl;
cout << " ((((\\ ,...       ,((((   /    `-.-'      " << endl;
cout << " )))  ;'    `""'""((((   (                 " << endl;
cout << "(((  /            (((      \               " << endl;
cout << " )) |                      |               " << endl;
cout << "((  |        .       '     |               " << endl;
cout << "))  \     _ '      `t   ,.')               " << endl;
cout << "(   |   y;- -,-""'-.\   \/                 " << endl;
cout << ")   / ./  ) /         `\  \                " << endl;
cout << "   |./   ( (           / /'                " << endl;
cout << "   ||     \\          //'|                 " << endl;
cout << "   ||      \\       _//'||                 " << endl;
cout << "   ||       ))     |_/  ||                 " << endl;
cout << "   \_\     |_/          ||                 " << endl;
cout << "                        \_\                " << endl;
cout << endl;

cout << "2) Chicken" << endl;
cout << "The Chicken is pretty lazy and sits in its coop all day!" << endl;
cout << endl;
  
cout << "         ,~.                               " << endl;
cout << "          ,-'__ `-,                        " << endl;
cout << "        {,-'  `. }              ,')        " << endl;
cout << "        ,( O )   `-.__         ,',')~,     " << endl;
cout << "       <=.) (         `-.__,==' ' ' '}     " << endl;
cout << "         (   )                      /      " << endl;
cout << "          `-'\   ,                  )      " << endl;
cout << "              |  \        `~.      /       " << endl;
cout << "              \   `._        \    /        " << endl;
cout << "               \     `._____,'   /         " << endl;
cout << "                `-.            ,'          " << endl;
cout << "                   `-.      ,-'            " << endl;
cout << "                      `~~~~'               " << endl;
cout << "                      //_||                " << endl;
cout << "                   __//--'/`               " << endl;   
cout << "                 ,--'/`  '                 " << endl;
cout << "                    '                      " << endl;
cout << endl;

cout << "3) Sheep" << endl;
cout << "The Sheep is so fluffy and loves to eat!" << endl;
cout << endl;

cout << "  ,-''''-.                         " << endl;  
cout << " (.  ,.   L        ___...__        " << endl;
cout << " /O} ,-`  `'-==''``        ''._    " << endl;
cout << "//{                           '`.  " << endl;
cout << "\_,X ,                         : ) " << endl;
cout << "    7                          ;`  " << endl;
cout << "    :                  ,       /   " << endl;
cout << "     \_,                \     ;    " << endl;
cout << "       Y   L_    __..--':`.    L   " << endl;
cout << "       |  /| ````       ;  y  J    " << endl;
cout << "       [ j J            / / L ;    " << endl;
cout << "       | |Y \          /_J  | |    " << endl;
cout << "       L_J/_)         /_)   L_J    " << endl;
cout << "      /_)                  /_)     " << endl;
cout << endl;
cout << "*****************************************************" << endl;
cin >> PetNum;

//HORSE
  
if (PetNum == 1){
  cout << "*****************************************************" << endl;
  cout << "You have chosen Old Macdonald's Horse!" << endl;
  cout << "Enter a name for your Horse: " << endl;
  cout << "*****************************************************" << endl;
  cin >> PetName;

  Horse pet1;
  pet1.setEnergy(70);
  pet1.setHappy(70);
  pet1.setHungry(70);
  pet1.setName(PetName);
  int choice;

  do{
    cout << "*****************************************************" << endl;
    cout << "Choose an interaction: " << endl;
    cout << "1) Play with " << pet1.getName() << endl;
    cout << "2) Feed " << pet1.getName() << endl;
    cout << "3) Put " << pet1.getName() << " to sleep" << endl;
    cout << "4) Go Horseback Riding on " << pet1.getName() << endl;
    cout << "5) Exit and Save your progress :(" << endl;
    cout << "*****************************************************" << endl;

    pet1.Stats();
    cin >> choice;

if (choice == 1){
      pet1.PlayPet();
      pet1.nextHour();
      pet1.Feelings();
      if ( ((pet1.getEnergy() < 0) || (pet1.getEnergy() > 100)) ||  ((pet1.getHungry() < 0) || (pet1.getHungry() > 100))  ||      
      ((pet1.getHappy() < 0) || (pet1.getHappy() > 100))   ){
        break;
      }
    }
    else if (choice == 2){
    pet1.FeedPet();
    pet1.nextHour();
    pet1.Feelings();
    if ( ((pet1.getEnergy() < 0) || (pet1.getEnergy() > 100)) ||  ((pet1.getHungry() < 0) || (pet1.getHungry() > 100))  ||      
      ((pet1.getHappy() < 0) || (pet1.getHappy() > 100))   ){
        break;
      }
    
    }
    else if (choice == 3){
      pet1.SleepPet();
      pet1.nextHour();
      pet1.Feelings();
      if ( ((pet1.getEnergy() < 0) || (pet1.getEnergy() > 100)) ||  ((pet1.getHungry() < 0) || (pet1.getHungry() > 100))  ||      
      ((pet1.getHappy() < 0) || (pet1.getHappy() > 100))   ){
        break;
      }
      
    }

    else if (choice == 4){
      pet1.RidingHorse();
      pet1.nextHour();
      pet1.Feelings();
      if ( ((pet1.getEnergy() < 0) || (pet1.getEnergy() > 100)) ||  ((pet1.getHungry() < 0) || (pet1.getHungry() > 100))  ||      
      ((pet1.getHappy() < 0) || (pet1.getHappy() > 100))   ){
        break;
      }
      
    }
      
    else if (choice == 5){
      break;
    }
       
  } while (choice != 5);

  if (choice == 5){
  string file;
   cout << "*****************************************************" << endl;
    cout << "Enter a filename to save progress: " << endl;
    cin >> file;
    ofstream fout;
    fout.open(file);
    while (!fout){
        cout << "*****************************************************" << endl;
      cout << "The filename is incorrect or not found" << endl;
      cout << "Enter a filename: " << endl;
      cout << "*****************************************************" << endl;
      cin >> file;

      exit(1);
    }
  
    fout << "Horse's Name: " << pet1.getName() << endl;
    fout << "Happiness Level: " << pet1.getHappy() << endl;
    fout << "Hunger Level: " << pet1.getHungry() <<  endl;
    fout << "Energy Level: " << pet1.getEnergy() << endl;
    fout << "Stamina Level: " << pet1.getStamina() << endl;

    cout << "See you next time!" << endl;
    fout.close();
  }

  else {
     cout << "*****************************************************" << endl;
      cout << pet1.getName() << " has passed away :(" << endl;
     cout << "*****************************************************" << endl;
    
    }  
}

//CHICKEN
  
else if (PetNum == 2){
  cout << "*****************************************************" << endl;
  cout << "You have chosen Old Macdonald's Chicken!" << endl;
  cout << "Enter a name for your Chicken: " << endl;
  cout << "*****************************************************" << endl;
  cin >> PetName;

  Chicken pet2;
  pet2.setEnergy(70);
  pet2.setHappy(70);
  pet2.setHungry(70);
  pet2.setName(PetName);
  pet2.setNumEggs(0);
  pet2.setEggLevel("Beginner Chicken");
  int choice;
  
do{
    cout << "*****************************************************" << endl;
    cout << "Choose an interaction: " << endl;
    cout << "1) Play with " << pet2.getName() << endl;
    cout << "2) Feed " << pet2.getName() << endl;
    cout << "3) Put " << pet2.getName() << " to sleep" << endl;
    cout << "4) Go collect eggs from " << pet2.getName() << endl;
    cout << "5) Exit and Save your progress :(" << endl;
    cout << "*****************************************************" << endl;

    pet2.Stats();
    cin >> choice;

if (choice == 1){
      pet2.PlayPet();
      pet2.nextHour();
      pet2.Feelings();
      if ( ((pet2.getEnergy() < 0) || (pet2.getEnergy() > 100)) ||  ((pet2.getHungry() < 0) || (pet2.getHungry() > 100))  ||      
      ((pet2.getHappy() < 0) || (pet2.getHappy() > 100))   ){
        break;
      }
    }
    else if (choice == 2){
    pet2.FeedPet();
    pet2.nextHour();
    pet2.Feelings();
    if ( ((pet2.getEnergy() < 0) || (pet2.getEnergy() > 100)) ||  ((pet2.getHungry() < 0) || (pet2.getHungry() > 100))  ||      
      ((pet2.getHappy() < 0) || (pet2.getHappy() > 100))   ){
        break;
      }
    
    }
    else if (choice == 3){
      pet2.SleepPet();
      pet2.nextHour();
      pet2.Feelings();
      if ( ((pet2.getEnergy() < 0) || (pet2.getEnergy() > 100)) ||  ((pet2.getHungry() < 0) || (pet2.getHungry() > 100))  ||      
      ((pet2.getHappy() < 0) || (pet2.getHappy() > 100))   ){
        break;
      }
      
    }

    else if (choice == 4){
      pet2.CollectingEggs();
      pet2.nextHour();
      pet2.Feelings();
      if ( ((pet2.getEnergy() < 0) || (pet2.getEnergy() > 100)) ||  ((pet2.getHungry() < 0) || (pet2.getHungry() > 100))  ||      
      ((pet2.getHappy() < 0) || (pet2.getHappy() > 100))   ){
        break;
      }
      
    }
      
    else if (choice == 5){
      break;
    }
       
  } while (choice != 5);

   if (choice == 5){
  string file;
   cout << "*****************************************************" << endl;
    cout << "Enter a filename to save progress: " << endl;
    cin >> file;
    ofstream fout;
    fout.open(file);
    while (!fout){
        cout << "*****************************************************" << endl;
      cout << "The filename is incorrect or not found" << endl;
      cout << "Enter a filename: " << endl;
      cout << "*****************************************************" << endl;
      cin >> file;

      exit(1);
    }
    
    fout << "Chicken's Name: " << pet2.getName() << endl;
    fout << "Happiness Level: " << pet2.getHappy() << endl;
    fout << "Hunger Level: " << pet2.getHungry() <<  endl;
    fout << "Energy Level: " << pet2.getEnergy() << endl;
    fout << "Egg Laying Level: " << pet2.getEggLevel() << endl;
    
     
    cout << "See you next time!" << endl;
    fout.close();
  }

  else {
     cout << "*****************************************************" << endl;
      cout << pet2.getName() << " has passed away :(" << endl;
     cout << "*****************************************************" << endl;
    
    }  
}

//SHEEP
  
else if (PetNum == 3){
  cout << "*****************************************************" << endl;
  cout << "You have chosen Old Macdonald's Sheep!" << endl;
  cout << "Enter a name for your Sheep: " << endl;
  cout << "*****************************************************" << endl;
  cin >> PetName;

  Sheep pet3;
  pet3.setEnergy(70);
  pet3.setHappy(70);
  pet3.setHungry(70);
  pet3.setName(PetName);
  pet3.setWool(0);
  pet3.setWoolLevel("Beginner Sheep");
  int choice;


do{
    cout << "*****************************************************" << endl;
    cout << "Choose an interaction: " << endl;
    cout << "1) Play with " << pet3.getName() << endl;
    cout << "2) Feed " << pet3.getName() << endl;
    cout << "3) Put " << pet3.getName() << " to sleep" << endl;
    cout << "4) Go collect wool from " << pet3.getName() << endl;
    cout << "5) Exit and Save your progress :(" << endl;
    cout << "*****************************************************" << endl;

    pet3.Stats();
    cin >> choice;

if (choice == 1){
      pet3.PlayPet();
      pet3.nextHour();
      pet3.Feelings();
      if ( ((pet3.getEnergy() < 0) || (pet3.getEnergy() > 100)) ||  ((pet3.getHungry() < 0) || (pet3.getHungry() > 100))  ||      
      ((pet3.getHappy() < 0) || (pet3.getHappy() > 100))   ){
        break;
      }
    }
    else if (choice == 2){
    pet3.FeedPet();
    pet3.nextHour();
    pet3.Feelings();
    if ( ((pet3.getEnergy() < 0) || (pet3.getEnergy() > 100)) ||  ((pet3.getHungry() < 0) || (pet3.getHungry() > 100))  ||      
      ((pet3.getHappy() < 0) || (pet3.getHappy() > 100))   ){
        break;
      }
    
    }
    else if (choice == 3){
      pet3.SleepPet();
      pet3.nextHour();
      pet3.Feelings();
      if ( ((pet3.getEnergy() < 0) || (pet3.getEnergy() > 100)) ||  ((pet3.getHungry() < 0) || (pet3.getHungry() > 100))  ||      
      ((pet3.getHappy() < 0) || (pet3.getHappy() > 100))   ){
        break;
      }
      
    }

    else if (choice == 4){
      pet3.Shearing();
      pet3.nextHour();
      pet3.Feelings();
      if ( ((pet3.getEnergy() < 0) || (pet3.getEnergy() > 100)) ||  ((pet3.getHungry() < 0) || (pet3.getHungry() > 100))  ||      
      ((pet3.getHappy() < 0) || (pet3.getHappy() > 100))   ){
        break;
      }
      
    }
      
    else if (choice == 5){
      break;
    }
       
  } while (choice != 5);

  if (choice == 5){
  string file;
   cout << "*****************************************************" << endl;
    cout << "Enter a filename to save progress: " << endl;
    cin >> file;
    ofstream fout;
    fout.open(file);
    while (!fout){
        cout << "*****************************************************" << endl;
      cout << "The filename is incorrect or not found" << endl;
      cout << "Enter a filename: " << endl;
      cout << "*****************************************************" << endl;
      cin >> file;

      exit(1);
    }

    fout << "Sheep's Name: " << pet3.getName() << endl;
    fout << " Happiness Level: " << pet3.getHappy() << endl;
    fout << " Hunger Level: " << pet3.getHungry() <<  endl;
    fout << " Energy Level: " << pet3.getEnergy() << endl;
    fout << "Wool Bearing Level: " << pet3.getWoolLevel() << endl;

    cout << "See you next time!" << endl;
    fout.close();
  }

  else {
     cout << "*****************************************************" << endl;
      cout << pet3.getName() << " has passed away :(" << endl;
     cout << "*****************************************************" << endl;
    
    }  
}
  
}


  
 return 0; 
}