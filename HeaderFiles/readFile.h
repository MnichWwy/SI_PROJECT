#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#define PARENT 0
#define MARRIED 1

using namespace std;

extern vector<string> personVec[1];
extern vector<pair<string, string>> pairVec[2];

void readFile();
