#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "toBinary.h"


#define PARENT 0
#define MARRIED 1

using namespace std;

extern vector<string> personVec[1];
extern vector<pair<string, string>> pairVec[2];

void toGrayPerson();
void toGrayPairs();