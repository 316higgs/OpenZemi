///////////////////////////////////////////
//                                       //
//   Main code for Janken game           //
//                                       //
//   Author: Seidai (2021.8.22)          //
//                                       //
///////////////////////////////////////////


#include "func.h"
#include <ctime>
#include <iostream>

int main() {

  PrintJankenLogo();
  
  bool inputchecker = false;

  while (judge==0) {
    while (inputchecker==false) {
      //My hand
      std::cout << ">>" << "\033[1;36m" << "  Input either number as shown below: " << "\033[m" << std::endl;
      std::cout << "\033[1;36m " << "    ROCK:1, SCISSORS:2, PAPER:3" << "\033[m" << std::endl;
      std::cout << ">>  Please select your hand: ";
      std::cin >> user;

      if (user==1 || user==2 || user==3) break; //valid case
      if (user<1 || user>3) {
        std::cout << ">>" << "\033[1;36m" << "  ERROR" << "\033[m" << ": Invalid number is input." << std::endl;
        std::cout << "           Please input number 1(Rock), 2(SCISSORS), 3(PAPER)" << std::endl;
        std::cout << " " << std::endl;
      }
    }

    GetMyHand(user);

    //computer's hand
    srand(time(&t) % RAND_MAX);
    comp = rand() % 3;
    GetCompHand(comp);

    GetJudge(user, comp);
  }

}


void PrintJankenLogo() {
  std::cout << " " << std::endl;
  std::cout << "=============================================================" << std::endl;
	std::cout << "=============================================================" << std::endl;
	std::cout << "      *****    *     **     ** **   *** ******* **     **    " << std::endl;
  std::cout << "        **   *   *   ****   ** **  ***  **      ****   **    " << std::endl;
  std::cout << "        **  **   **  ** **  ** ******   ******* ** **  **    " << std::endl;
  std::cout << "        **  *******  **  ** ** *****    ******* **  ** **    " << std::endl;
  std::cout << "   **  **  **     ** **   **** ** ***   **      **   ****    " << std::endl;
  std::cout << "     ***   **     ** **    *** **   *** ******* **    ***    " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "   *****       *     ********* ********* **       *******    " << std::endl;
  std::cout << "   **  **    *   *   ********* ********* **       **         " << std::endl;
  std::cout << "   ****     **   **     ***       ***    **       *******    " << std::endl;
  std::cout << "   ******   *******     ***       ***    **       *******    " << std::endl;
  std::cout << "   **   ** **     **    ***       ***    ******** **         " << std::endl;
  std::cout << "   ******  **     **    ***       ***    ******** *******    " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "                       2021  Ver.0                         " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "\033[1;36m " << "                    - GAME START -" << "\033[m" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "=============================================================" << std::endl;
}

void GetMyHand(int user) {
  switch(user) {
    case 1:
      std::cout << ">>" << "\033[1;36m" << "  You are ROCK" << "\033[m" << std::endl; 
      break;
    case 2:
      std::cout << ">>" << "\033[1;36m" << "  You are SCISSORS" << "\033[m" << std::endl;  
      break;
    case 3:
      std::cout << ">>" << "\033[1;36m" << "  You are PAPER" << "\033[m" << std::endl;  
      break;
  }
}

void GetCompHand(int comp) {
  std::cout << ">>" << "\033[1;36m" << "  COMPUTER is... " << "\033[m";
  sleep(1);
  switch(comp) {
    case 0:
      std::cout << "\033[1;36m" << "ROCK!" << "\033[m" << std::endl; 
      break;
    case 1:
      std::cout << "\033[1;36m" << "SCISSORS!" << "\033[m" << std::endl;  
      break;
    case 2:
      std::cout << "\033[1;36m" << "PAPER!" << "\033[m" << std::endl;  
      break;
  }
}

void GetJudge(int user, int comp) {
  judge = ((user-1) - comp + 3)%3;
  if(judge==0) {
    std::cout << ">>" << "\033[1;36m " << " DRAW...  One more time!" << "\033[m" << std::endl;
    std::cout << " " << std::endl;
  }
  else if (judge==1) std::cout << ">>" << "\033[1;36m " << " You Lose..." << "\033[m" << std::endl;
  else std::cout << ">>" << "\033[1;36m " << " You Win!" << "\033[m" << std::endl;
}

void ERRORMessage(int user) {
  
}
