#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <ctime>

using namespace std;

extern int populationSize;
//extern int bits_;
//extern vector<vector<string>> population;
extern vector<int> fitness;
extern vector<string> actualPopulation;
extern vector<string> crossovers;
extern vector<string> mutations;
extern vector<string> newPopulation;

void initPopulation();
void showPopulation();