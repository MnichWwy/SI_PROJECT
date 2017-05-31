#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <ctime>
#include "readFile.h"
#include "toBinary.h"
#include "toGray.h"
#include "populationBase.h"
#include "crossovers.h"
#include "menu.h"

using namespace std;

vector<string> personVec[1];
vector <pair<string, string>> pairVec[2];

int populationSize = 10;
int bestActualFitness;
float crossingProb = 0.7;
vector<int> fitness(populationSize,0);
vector<string> actualPopulation(populationSize,"      ");
vector<string> crossovers(populationSize, "      ");
vector<string> mutations(populationSize, "      ");
vector<string> newPopulation(populationSize, "      ");
vector<int> selectedIndex;


int main(int argc, char** argv)
{
	system("cls");
	//readFile();
	initPopulation();
	//mainMenu();
	//showPopulation(); //test
	fitnessFunction(1);
	sortByFitness();
	selectChromosome();
	singlePointCrossover();
	showInRow();
	system("pause");
	return 0;
}
