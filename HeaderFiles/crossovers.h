#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <ctime>

using namespace std;

extern int populationSize;
extern float crossingProb;
extern vector<int> fitness;
extern vector<string> actualPopulation;
extern vector<string> crossovers;
extern vector<string> mutations;
extern vector<string> newPopulation;
extern vector<int> selectedIndex;

void selectChromosome();
void singlePointCrossover();
