#pragma once

#include <iostream>
#include "Const.h"

static float user = -1;
static float comp;
static time_t t;

static bool inputchecker = false;

//static int judge = 0;


static void PrintJankenLogo() {
  std::cout << " " << std::endl;
  std::cout << "\e[38;5;22m\e[1m=============================================================\e[0m" << std::endl;
  std::cout << "\e[38;5;22m\e[1m=============================================================\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "      *****    *     **     ** **   *** ******* **     **    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "        **   *   *   ****   ** **  ***  **      ****   **    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "        **  **   **  ** **  ** ******   ******* ** **  **    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "        **  *******  **  ** ** *****    ******* **  ** **    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   **  **  **     ** **   **** ** ***   **      **   ****    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "     ***   **     ** **    *** **   *** ******* **    ***    " << "\e[0m" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   *****       *     ********* ********* **       *******    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   **  **    *   *   ********* ********* **       **         " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   ****     **   **     ***       ***    **       *******    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   ******   *******     ***       ***    **       *******    " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   **   ** **     **    ***       ***    ******** **         " << "\e[0m" << std::endl;
  std::cout << "\e[38;5;76m\e[1m" << "   ******  **     **    ***       ***    ******** *******    " << "\e[0m" << std::endl;
  std::cout << " " << std::endl;
  //std::cout << "                       2021  Ver.0                         " << std::endl;
  //std::cout << "                       2021  Ver.1                         " << std::endl;
  std::cout << "                      " << VERYEAR << " Ver." << VERMAIN << "." << VERSUB << std::endl;
  std::cout << " " << std::endl;
  std::cout << "\e[38;5;70m\e[1m " << "                    - GAME START -" << "\e[0m" << std::endl;
  std::cout << " " << std::endl;
  std::cout << "\e[38;5;22m\e[1m=============================================================\e[0m" << std::endl;
}