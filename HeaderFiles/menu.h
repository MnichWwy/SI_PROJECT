#pragma once
#include <iostream>
#include "toBinary.h"
#include "toGray.h"
#include "mutation.h"
#include "crossovers.h"
#include "populationBase.h"

using namespace std;

extern float crossingProb;
extern int crossoverNumber;
extern int fitnessNumber;
void mainMenu();
int getInt();
int getIntFromRange(int, int);
void codingMetodMenu();
void mutationsMenu();
void crossoverMenu();
void fitnessMenu();
void showMenu();