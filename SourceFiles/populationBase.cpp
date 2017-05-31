#include "populationBase.h"

void initPopulation()
{
	srand(time(NULL));
	for (int i = 0; i<populationSize; i++)
	{
		population.push_back(bitset<6>(rand() % 33).to_string());
	}
}

void showPopulation()
{
	for (auto it = population.begin(); it != population.end(); it++)
	{
		cout << *it << endl;
	}
}