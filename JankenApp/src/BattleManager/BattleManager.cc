#include <iostream>
#include "../../include/BattleManager.h"

//@@@ Summary: Show HP
float BattleManager::GetHP() {
  std::cout << "|  My HP: " << HP << " [";
  float diffHP = MaxHP - HP;
  for (int i=0; i<(int)HP; i++) std::cout << "I";
  for (int i=0; i<(int)diffHP; i++) std::cout << ".";
  std::cout << "]" << std::endl;
  return HP;
}

//@@@ Summary: Determine the effect of HP from the result and the ability of enemy
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

//@@@ Summary: Check if HP is zero (if zero, end the game)
bool BattleManager::CheckHP() {
  bool gameover = false;
  if (HP==0) {
  	gameover = true;
  	std::cout << ">> \033[1;36m" << "  GAME OVER..." << "\033[m" << std::endl;
  }
  return gameover;
}

//@@@ Summary: Show ecperience point
int BattleManager::GetExp() {
  std::cout << "|  My Exp: " << Exp << std::endl;
  return Exp;
}

//@@@ Summary: Show level
int BattleManager::GetLevel() {
  std::cout << "|  My Level: " << Level << std::endl;
  return Level;
}

//@@@ Summary: Refer the current experience point, and update level
void BattleManager::CommitLevel() {
  float UpperLimit = ExpConst*(Level+1);
  if (Exp>UpperLimit) {
  	Level++;
  	Exp = 0;
  }
}

//@@@ Summary: Update factors based on level
void BattleManager::CommitFactors() {
  RcvrFactor *= (Level+1)*RcvrFactor;
}

//@@@ Summary: Show status summary
void BattleManager::ShowStatus() {
  std::cout << " -----------------------------" << std::endl;
  this -> GetLevel();
  this -> GetExp();
  this -> GetHP();
  std::cout << " -----------------------------" << std::endl;
}

