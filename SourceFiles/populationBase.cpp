#include "populationBase.h"

void initPopulation()
{
	srand(time(NULL));
	for (int i = 0; i<populationSize; i++)
	{
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

void showInRow()
{
	cout << "ocena|aktualna pop.|krzyzowania|mutacje|nowa populacja"  << endl;
	for (int i = 0; i < populationSize; i++)
	{
		//cout << "111" << " \t" << "111111" << "\t    " << "111111" << "\t " << "111111" << "\t  "  << "111111" << endl;
		cout << fitness[i] << " \t" << actualPopulation[i] << "\t    " << crossovers[i] << "\t " << mutations[i] << "\t  " << actualPopulation[i] << newPopulation[i] << endl;
	}
}

void sortByFitness()
{
	int size = populationSize;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (fitness[j] < fitness[j + 1])
			{
				swap(fitness[j], fitness[j + 1]);
				swap(actualPopulation[j], actualPopulation[j + 1]);
			}			
		}
	}
}

void fitnessFunction(int i)
{
	int x, y, fun, max = 0;

	switch (i)
	{
	case 1:
	{
		for (int it = 0; it < 10; it++)
		{
			string sTemp = actualPopulation[it];
			//cout << sTemp << endl;
			bitset<6> bTemp(sTemp);
			x = bTemp.count();
			y = bTemp.to_ulong();
			//cout << x << " " << y << endl;
			fun = x*x + 4 * y;
			if (max < fun) max = fun;
			//cout << "fun " << fun << endl;
			fitness[it] = fun;
		}
		break;
	}
	case 2:
	{
		for (int it = 0; it < 10; it++)
		{
			string sTemp = actualPopulation[it];
			bitset<6> bTemp(sTemp);
			x = bTemp.count();
			y = bTemp.to_ulong();
			fun = x*x*y;
			if (max < fun) max = fun;
			fitness[it] = fun;
		}
		break;
	}
	case 3:
	{
		for (int it = 0; it < 10; it++)
		{
			string sTemp = actualPopulation[it];
			bitset<6> bTemp(sTemp);
			x = bTemp.count();
			y = bTemp.to_ulong();
			fun = y*y + 2 * x;
			if (max < fun) max = fun;
			fitness[it] = fun;
		}
		break;
	}
	}
	bestActualFitness = max;
}