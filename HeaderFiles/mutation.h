#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include "populationBase.h"

using namespace std;

extern int mutationchance;
extern int random_bit1;
extern int random_bit2;
extern int nextgene;
extern int range;

HANDLE hOut;

void scrambleMutation();
void inversionMutation();
void swapMutation();
void bitflipMutation();	
