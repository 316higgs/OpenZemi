#include "../../include/Global.h"
#include "../../include/MakeHands.h"


void MakeHands::GetMyHand(float user) {
  int Iuser = (int)user;
  switch(Iuser) {
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

void MakeHands::GetCompHand(float comp) {
  int Icomp = (int)comp;
  std::cout << ">>" << "\033[1;36m" << "  COMPUTER is... " << "\033[m";
  sleep(1);
  switch(Icomp) {
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

int MakeHands::GetJudge(float user, float comp) {
  int judge = (((int)user-1) - (int)comp + 3)%3;
  std::cout << " " << std::endl;
  if(judge==0) {
    std::cout << ">>" << "\033[1;36m " << " DRAW...  One more time!" << "\033[m" << std::endl;
    std::cout << " " << std::endl;
  }
  else if (judge==1) std::cout << ">>" << "\033[1;36m " << " You Lose..." << "\033[m" << std::endl;
  else std::cout << ">>" << "\033[1;36m " << " You Win!" << "\033[m" << std::endl;
  return judge;
}


void MakeHands::SelectMyHand(bool inputchecker) {
  while (inputchecker==false) {
    std::cout << ">>" << "\033[1;36m" << "  Input either number as shown below: " << "\033[m" << std::endl;
    std::cout << "\033[1;36m " << "   ROCK:1, SCISSORS:2, PAPER:3" << "\033[m" << std::endl;
    std::cout << ">>  Please select your hand: ";
    std::cin >> user;

    if (user==0) {
      std::cout << ">>" << "\033[1;36m" << "  ERROR" << "\033[m" << ": Invalid number is input (characters)" << std::endl;
      std::cout << ">>" << "   Aborted. Please try again." << std::endl;
      std::exit(EXIT_FAILURE);
    }

    if (user==1 || user==2 || user==3) break; //valid case

    if (user<1 || user>3) {
      std::cout << ">>" << "\033[1;36m" << "  ERROR" << "\033[m" << ": Invalid number is input (out of range)" << std::endl;
      std::cout << "           Please input number 1(Rock), 2(SCISSORS), 3(PAPER)" << std::endl;
      std::cout << " " << std::endl;
    }
      
    if (user>1 && user<3 && user!=2) {
      std::cout << ">>" << "\033[1;36m" << "  ERROR" << "\033[m" << ": Invalid number is input (decimals)" << std::endl;
      std::cout << "           Please input number 1(Rock), 2(SCISSORS), 3(PAPER)" << std::endl;
      std::cout << " " << std::endl;
    }
  }
}