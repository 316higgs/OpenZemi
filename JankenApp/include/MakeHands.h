#pragma once

#ifndef MAKEHANDS_h
#define MAKEHANDS_h

#include <time.h>
#include <unistd.h>
#include <math.h>

/*
float user = -1;
float comp;
time_t t;

bool inputchecker = false;

int judge = 0;

bool responsechecker = false;
*/

class MakeHands {
  public:
  	MakeHands(){};
  	virtual ~MakeHands(){};

  	void GetMyHand(float user);
	void GetCompHand(float comp);

	int GetJudge(float user, float comp);

	void SelectMyHand(bool inputchecker);

	void GetRetry();
};

/*
void PrintJankenLogo();

void GetMyHand(float user);
void GetCompHand(float comp);

void GetJudge(float user, float comp);

void SelectMyHand(bool inputchecker);

void GetRetry();
*/

#endif