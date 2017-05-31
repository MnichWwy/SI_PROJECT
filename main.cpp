#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <ctime>
#include "readFile.h"
#include "toBinary.h"
#include "toGray.h"
#include "populationBase.h"
#include "menu.h"

using namespace std;

vector<string> personVec[1];
vector <pair<string, string>> pairVec[2];

int populationSize = 10;
vector<string> population;

int main(int argc, char** argv)
{
	system("cls");
	//readFile();
	initPopulation();
	//mainMenu();
	showPopulation(); //test
	system("pause");
	return 0;
}
