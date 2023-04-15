#pragma once

#ifndef STATMANAGER_h
#define STATMANAGER_h

#include <TH1F.h>

class StatManager {
  private:
  	TH1F* h1_hands;

  public:
    StatManager() {
      h1_hands = new TH1F("h1_hands", "Hands, Hands, # of Entires", 3, 0, 3);
    }
  	virtual ~StatManager(){};

  	void SetHistoVisual();
};

#endif