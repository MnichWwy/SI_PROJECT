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
//int bits_ = 6;
vector<int> fitness(populationSize,0);
vector<string> actualPopulation(populationSize,"      ");
vector<string> crossovers(populationSize, "      ");
vector<string> mutations(populationSize, "      ");
vector<string> newPopulation(populationSize, "      ");

void fitnessFunction(int i)
{
	auto it1 = actualPopulation.begin();
	auto it2 = fitness.begin();

	switch (i)
	case 1:
	{
		for (it1; it1 != actualPopulation.end(); it1++)
		{
			it2++;
			//	cout << *it << endl;
			string sTemp = *it1;
			//int iTemp = atoi(sTemp.c_str());

			//tu ogolnie bedzie przypisanie do fitness obliczonej wartosci z actualPopulation
			//w innych case'ach inne funkcje oceny
		}
		break;
	}
	
}


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
