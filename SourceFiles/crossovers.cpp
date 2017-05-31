#include "crossovers.h"

void selectChromosome()
{
	srand(time(NULL));
	int range = crossingProb * 100;
	int count = 0;
	for (int i = 0; i < populationSize; i++)
	{
		int randNr = rand() % 101 + 1;
		if (randNr <= range) selectedIndex.push_back(i);
		count++;
	}
	if (count % 2 == 1) selectedIndex.pop_back();
}

void singlePointCrossover()
{
	srand(time(NULL));
	int pivot;
	for (auto it = selectedIndex.begin(); it != selectedIndex.end(); it++)
	{
		string firstCh, secondCh, firstPart, secondPart, newCh;
		firstCh = actualPopulation[*it];
		it++;
		secondCh = actualPopulation[*it];
		pivot = rand() % 5 + 1;
		firstPart = firstCh.substr(0, pivot);
		secondPart = secondCh.substr(pivot, 6 - pivot);
		newCh = firstPart + secondPart;
		crossovers.push_back(newCh);
	}
}