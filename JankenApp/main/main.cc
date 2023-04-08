#include <iostream>
#include "../include/hello.h"
#include "../include/Global.h"
#include "../include/Const.h"
#include "../include/MakeHands.h"
#include "../include/BattleManager.h"

int main() {

  PrintJankenLogo();
  MakeHands myMakeHands;
  BattleManager usrBM(iniHP);
  BattleManager cpuBM(iniHP);
  usrBM.ShowStatus();

  int round = 0;
  bool trychecker = true;

  while (trychecker==true) {
    std::cout << ">>" << "\033[1;36m" << "  [BATTLE: " << round << "]" << "\033[m" << std::endl;

    int judge = 0;
    while (judge==0) {
      myMakeHands.SelectMyHand(inputchecker);
      myMakeHands.GetMyHand(user);

      //computer's hand
      srand(time(&t) % RAND_MAX);
      comp = rand() % 3;
      myMakeHands.GetCompHand(comp);

      judge = myMakeHands.GetJudge(user, comp);
    }
    usrBM.CommitHP(judge, &cpuBM);
    usrBM.CheckLevel();
    usrBM.ShowStatus();
    if (usrBM.CheckHP()) return 0;

    //Retry
    std::string retry;
    bool responsechecker = false;
    while (responsechecker==false) {
      std::cout << ">>" << "\033[1;36m" << "  Try again?" << "\033[m" << " (Please input yes or no): ";
      std::cin >> retry;
      if (retry=="Y" || retry=="y" || retry=="Yes" || retry=="YES" || retry=="yes") {
        round++;
        std::cout << " " << std::endl;
        std::cout << ">>" << "\033[1;36m" << "  -----------------------------------------------------" << "\033[m" << std::endl;
        break;
      }
      else if (retry=="N" || retry=="n" || retry=="No" || retry=="NO" || retry=="no") {
        trychecker = true;
        std::cout << ">>" << "\033[1;36m" << "  Thank you for playing!" << "\033[m" << std::endl;
        std::cout << ">>" << "\033[1;36m" << "  Good Bye!" << "\033[m" << std::endl;
        std::cout << " " << std::endl;
        std::exit(EXIT_SUCCESS);
      }
      else {
        std::cout << ">>" << "\033[1;36m" << "  ERROR" << "\033[m" << ": Invalid characters are input" << std::endl;
        std::cout << "           Please input yes or no" << std::endl;
        responsechecker = false;
      }
    }

  }

  return 0;
}
