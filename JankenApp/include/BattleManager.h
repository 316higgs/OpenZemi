#pragma once

#ifndef BATTLEMANAGER_h
#define BATTLEMANAGER_h

#include "Const.h"

class BattleManager {
  private:
  	float HP;
  	float MaxHP;
  	int Level;
  	int Exp;
  	float AttkFactor;
  	float RcvrFactor;

  public:
    BattleManager(float givenHP) {
      HP = givenHP;
      MaxHP = givenHP;
      Level = 0;
      Exp = 0;
      AttkFactor = 1.;
      RcvrFactor = 1.;
    }
  	virtual ~BattleManager(){};

  	float GetHP();
  	void CommitHP(int judge, BattleManager* enemyBM);
  	bool CheckHP();

    int GetExp();
  	int GetLevel();
  	void CheckLevel();

  	void ShowStatus();
};

#endif