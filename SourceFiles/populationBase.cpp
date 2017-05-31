#include "populationBase.h"

void initPopulation()
{
	srand(time(NULL));
	for (int i = 0; i<populationSize; i++)
	{
		//actualPopulation.push_back(bitset<6>(rand() % 33).to_string());
		actualPopulation[i] = bitset<6>(rand() % 33).to_string();
	}
}

void showPopulation()
{
	for (auto it = actualPopulation.begin(); it != actualPopulation.end(); it++)
	{
		cout << *it << endl;
	}
}