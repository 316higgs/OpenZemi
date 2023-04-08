#include <iostream>
#include "../../include/BattleManager.h"

float BattleManager::GetHP() {
  std::cout << "|  My HP: " << HP << " [";
  float diffHP = MaxHP - HP;
  for (int i=0; i<(int)HP; i++) std::cout << "I";
  for (int i=0; i<(int)diffHP; i++) std::cout << ".";
  std::cout << "]" << std::endl;
}

void BattleManager::CommitHP(int judge, BattleManager* enemyBM) {
  float ImpactFactor   = enemyBM->AttkFactor;
  float RecoveryFactor = RcvrFactor;
  if (judge==0) {
  }
  else if (judge==1) {
  	HP -= ImpactFactor;
  }
  else {
  	if (HP!=MaxHP) HP += RcvrFactor;
  	Exp++;
  }
}

bool BattleManager::CheckHP() {
  bool gameover = false;
  if (HP==0) {
  	gameover = true;
  	std::cout << ">> \033[1;36m" << "  GAME OVER..." << "\033[m" << std::endl;
  }
  return gameover;
}

int BattleManager::GetExp() {
  std::cout << "|  My Exp: " << Exp << std::endl;
}

int BattleManager::GetLevel() {
  std::cout << "|  My Level: " << Level << std::endl;
}

void BattleManager::CheckLevel() {
  float UpperLimit = ExpConst*(Level+1);
  if (Exp>UpperLimit) {
  	Level++;
  	Exp = 0;
  }
}

void BattleManager::ShowStatus() {
  std::cout << " -----------------------------" << std::endl;
  this -> GetLevel();
  this -> GetExp();
  this -> GetHP();
  std::cout << " -----------------------------" << std::endl;
}

