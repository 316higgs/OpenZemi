#include "../../include/Global.h"
#include "../../include/MakeHands.h"


void MakeHands::GetMyHand(float user) {
  int Iuser = (int)user;
  switch(Iuser) {
    case 1:
      std::cout << ">>" << "\e[38;5;58m\e[1m" << "  You are ROCK" << "\e[0m" << std::endl; 
      break;
    case 2:
      std::cout << ">>" << "\e[38;5;58m\e[1m" << "  You are SCISSORS" << "\e[0m" << std::endl;  
      break;
    case 3:
      std::cout << ">>" << "\e[38;5;58m\e[1m" << "  You are PAPER" << "\e[0m" << std::endl;  
      break;
  }
}

void MakeHands::GetCompHand(float comp) {
  int Icomp = (int)comp;
  std::cout << ">>" << "\e[38;5;58m\e[1m" << "  COMPUTER is... " << "\e[0m";
  sleep(1);
  switch(Icomp) {
    case 0:
      std::cout << "\e[38;5;58m\e[1m" << "ROCK!" << "\e[0m" << std::endl; 
      break;
    case 1:
      std::cout << "\e[38;5;58m\e[1m" << "SCISSORS!" << "\e[0m" << std::endl;  
      break;
    case 2:
      std::cout << "\e[38;5;58m\e[1m" << "PAPER!" << "\e[0m" << std::endl;  
      break;
  }
}

int MakeHands::GetJudge(float user, float comp) {
  int judge = (((int)user-1) - (int)comp + 3)%3;
  std::cout << " " << std::endl;
  if(judge==0) {
    std::cout << ">>" << "\e[38;5;58m\e[1m " << " DRAW...  One more time!" << "\e[0m" << std::endl;
    std::cout << " " << std::endl;
  }
  else if (judge==1) std::cout << ">>" << "\e[38;5;58m\e[1m " << " You Lose..." << "\e[0m" << std::endl;
  else std::cout << ">>" << "\e[38;5;58m\e[1m " << " You Win!" << "\e[0m" << std::endl;
  return judge;
}


void MakeHands::SelectMyHand(bool inputchecker) {
  while (inputchecker==false) {
    std::cout << ">>" << "\e[38;5;58m\e[1m" << "  Input either number as shown below: " << "\e[0m" << std::endl;
    std::cout << "\e[38;5;58m\e[1m " << "   ROCK:1, SCISSORS:2, PAPER:3" << "\e[0m" << std::endl;
    std::cout << ">>  Please select your hand: ";
    std::cin >> user;

    if (user==0) {
      std::cout << ">>" << "\e[38;5;58m\e[1m" << "  ERROR" << "\e[0m" << ": Invalid number is input (characters)" << std::endl;
      //std::cout << "           Please input number 1(Rock), 2(SCISSORS), 3(PAPER)" << std::endl;
      //std::cout << " " << std::endl;
      std::cout << ">>" << "   Aborted. Please try again." << std::endl;
      std::exit(EXIT_FAILURE);
    }

    if (user==1 || user==2 || user==3) break; //valid case

    if (user<1 || user>3) {
      std::cout << ">>" << "\e[38;5;58m\e[1m" << "  ERROR" << "\e[0m" << ": Invalid number is input (out of range)" << std::endl;
      std::cout << "           Please input number 1(Rock), 2(SCISSORS), 3(PAPER)" << std::endl;
      std::cout << " " << std::endl;
    }
      
    if (user>1 && user<3 && user!=2) {
      std::cout << ">>" << "\e[38;5;58m\e[1m" << "  ERROR" << "\e[0m" << ": Invalid number is input (decimals)" << std::endl;
      std::cout << "           Please input number 1(Rock), 2(SCISSORS), 3(PAPER)" << std::endl;
      std::cout << " " << std::endl;
    }
  }
}