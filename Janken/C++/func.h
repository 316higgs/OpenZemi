#include <time.h>
//#include <thread>
#include <unistd.h>
#include <math.h>

int user = -1;
int comp;
time_t t;

int judge = 0;

void PrintJankenLogo();

void GetMyHand(int user);
void GetCompHand(int comp);

void GetJudge(int user, int comp);

void ERRORMessage(int user);