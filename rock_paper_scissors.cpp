// // In this program, we will be excecuting the game "rock, paper, scissors, lizard spock"
// Popularized in the show BBT
#include <iostream>
#include <stdlib.h>
int main() {
  //live long and prosper
srand(time(NULL));
int computer = rand() % 3 +1;
  int userChoice;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";



std::cin>> userChoice;
if(userChoice > 3){
  std::cout<< "Pick 1-3\n";

  main();
}

if(userChoice == computer){
  std::cout<<"tie!";
  std::cout<< "computer picked: "<<computer;
}
  else if(userChoice == 1 && computer ==2){
    std::cout<<"Loss!";
     std::cout<< " computer picked: "<<computer;
    
  }
    
else if(userChoice ==2 && computer == 1){
  std::cout<<"Winner!";
   std::cout<< " computer picked: "<<computer;

}
else if(userChoice ==3 && computer == 1){
  std::cout<<"Loss!";
   std::cout<< " computer picked: "<<computer;

}else  if(userChoice == 3 && computer== 2){
std::cout<<"Loss!\n";
std::cout<< "computer picked: "<<computer;  
}
else{
  std::cout<<"this shouldn't happen!";
   std::cout<< " computer picked: "<<computer;
}
}
