#pragma once

#include <iostream>

static float user = -1;
static float comp;
static time_t t;

static bool inputchecker = false;

static int judge = 0;


static void PrintJankenLogo() {
  std::cout << " " << std::endl;
  std::cout << "=============================================================" << std::endl;
  std::cout << "=============================================================" << std::endl;
  std::cout << "\033[1;36m" << "      *****    *     **     ** **   *** ******* **     **    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "        **   *   *   ****   ** **  ***  **      ****   **    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "        **  **   **  ** **  ** ******   ******* ** **  **    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "        **  *******  **  ** ** *****    ******* **  ** **    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "   **  **  **     ** **   **** ** ***   **      **   ****    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "     ***   **     ** **    *** **   *** ******* **    ***    " << "\033[m" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "\033[1;36m" << "   *****       *     ********* ********* **       *******    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "   **  **    *   *   ********* ********* **       **         " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "   ****     **   **     ***       ***    **       *******    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "   ******   *******     ***       ***    **       *******    " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "   **   ** **     **    ***       ***    ******** **         " << "\033[m" << std::endl;
  std::cout << "\033[1;36m" << "   ******  **     **    ***       ***    ******** *******    " << "\033[m" << std::endl;
  std::cout << " " << std::endl;
  //std::cout << "                       2021  Ver.0                         " << std::endl;
  std::cout << "                       2021  Ver.1                         " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "\033[1;36m " << "                    - GAME START -" << "\033[m" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "=============================================================" << std::endl;
}