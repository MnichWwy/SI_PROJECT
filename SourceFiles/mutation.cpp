#include "mutation.h"
#include "populationBase.h"

void inversionMutation()
{
	mutations = actualPopulation;
	int random_gene = (rand() % populationSize) + 0;
	int random_bit1 = (rand() % 4) + 0;
	int range = 6 - random_bit1;
	int random_bit2 = (rand() % range) + random_bit1;
	char tmp1, tmp2;
	while (random_bit2 > random_bit1 || random_bit2 != random_bit1)
	{
		tmp1 = mutations[random_gene][random_bit1];
		tmp2 = mutations[random_gene][random_bit2];
		mutations[random_gene][random_bit2] = tmp1;
		mutations[random_gene][random_bit1] = tmp2;
		random_bit1++;
		random_bit2--;
	}
	cout << "Mutacja nastąpiła w genie " << actualPopulation[random_gene] << "zamieniając go na gen " << mutations[random_gene] << endl;
	system("pause");

}

void swapMutation()
{
	mutations = actualPopulation;
	int random_gene = (rand() % populationSize) + 0;
	int random_bit1 = (rand() % 5) + 0;
	int random_bit2 = (rand() % 5) + 0;
	while (random_bit1 == random_bit2)
	{
		random_bit2 = (rand() % 5) + 0;
	}
	char tmp = mutations[random_gene][random_bit1];
	mutations[random_gene][random_bit1] = mutations[random_gene][random_bit2];
	mutations[random_gene][random_bit2] = tmp;
	cout << "Mutacja nastąpiła w genie " << actualPopulation[random_gene] << " zamieniając go na gen " << mutations[random_gene] << " za pomocą zamiany bitu" << random_bit1 <<"na"<< random_bit2 << endl;
	system("pause");
}

void bitflipMutation()
{
	mutations = actualPopulation;
	int random_bit = (rand() % 5) + 0;
	int random_gene = (rand() % populationSize) + 0;
	bitset<6> flipendo(mutations[random_gene]);
	flipendo.flip(random_bit);
	mutations[random_gene] = flipendo.to_string();
	cout << "Mutacja nastąpiła w genie" << actualPopulation[random_gene] << "zamieniając go na gen" << mutations[random_gene] << "za pomocą negacji bitu" << random_bit << endl;
	system("pause");
}
