#pragma once

#ifndef BATTLEMANAGER_h
#define BATTLEMANAGER_h

#include "Const.h"

////////////////////////////////////////////////////////
//
//  @@@ Summary: Class for manager of battle status
//
////////////////////////////////////////////////////////


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
      HP = givenHP;      // HP
      MaxHP = givenHP;   // Maximum of HP
      Level = 0;         // Level
      Exp = 0;           // Experience point
      AttkFactor = 1.;   // Multiple factor of attack
      RcvrFactor = 1.;   // Multiple factor of recovery
    }
  	virtual ~BattleManager(){};

    // HP-related functions
  	float GetHP();
  	void CommitHP(int judge, BattleManager* enemyBM);
  	bool CheckHP();

    // Experience point & Level-related functions
    int GetExp();
  	int GetLevel();
  	void CommitLevel();

    // Impact factor-related functions
    void CommitFactors();

    // Show status summary
  	void ShowStatus();
};

#endif