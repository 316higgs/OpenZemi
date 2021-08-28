#include <time.h>
//#include <thread>
#include <unistd.h>
#include <math.h>

//int user = -1;
//int comp;
float user = -1;
float comp;
time_t t;

bool inputchecker = false;

int judge = 0;

//int round = 0;
//bool trychecker = true;
bool responsechecker = false;

void PrintJankenLogo();

//void GetMyHand(int user);
//void GetCompHand(int comp);
void GetMyHand(float user);
void GetCompHand(float comp);

//void GetJudge(int user, int comp);
void GetJudge(float user, float comp);

void SelectMyHand(bool inputchecker);

void GetRetry();
