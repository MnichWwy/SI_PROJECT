#include "mutation.h"
#include "populationBase.h"

void inversionMutation() //bierze losowy ciąg i zamienia go by był tyłem do przodu, np: 10011 -> 11001
{
	mutations = actualPopulation;
	for (nextgene=0; nextgene<populationSize;nextgene++)
	{
		bitset<32> flipendo(mutations[nextgene]);
		if (flipendo.to_string() != "11111111111111111111111111111111" || flipendo.to_string() !="11111111111111111111111111111111")  //powinno być po 32
		{
			if (rand() % 100 < mutationchance) //szansa na zmutowanie
			{
				random_bit1 = (rand() % 31) + 0;
				range = 32 - random_bit1;
				random_bit2 = (rand() % range) + random_bit1; //losuje z bitseta miejsce startu i końca ciągu
				char tmp1;
				x=random_bit1;
				y=random_bit2;
				while (random_bit2 > random_bit1 || random_bit2 != random_bit1)
				{
					tmp1 = mutations[nextgene][random_bit1];
					mutations[nextgene][random_bit1] = mutations[nextgene][random_bit2];
					mutations[nextgene][random_bit2] = tmp1;
					random_bit1++;
					random_bit2--;
				}
				
					
				int i;
				hOut = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute( hOut, 0 );
				for (i=0;i<x;i++)
				{
					cout<<actualPopulation[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<actualPopulation[nextgene][x];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=x+1;i<y;i++)
				{
					cout<<actualPopulation[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<actualPopulation[nextgene][y];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=y+1;i<32;i++)
				{
					cout<<actualPopulation[nextgene][i];
				}
				cout<<" przemutował w gen";
				for (i=0;i<x;i++)
				{
					cout<<mutations[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<actualPopulation[nextgene][x];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=x+1;i<y;i++)
				{
					cout<<mutations[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<mutations[nextgene][y];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=y+1;i<32;i++)
				{
					cout<<mutations[nextgene][i];
				}
			}
		}
	}

	system("pause");

}

void swapMutation() //zamienia miejscami dwa losowe bity
{
	mutations = actualPopulation;
	for (nextgene=0; nextgene<populationSize;nextgene++)
	{
		bitset<32> flipendo(mutations[nextgene]);
		if (flipendo.to_string() != "11111111111111111111111111111111" || flipendo.to_string() !="11111111111111111111111111111111")  //powinno być po 32
		{
			if (rand() % 100 < mutationchance)
			{
				random_bit1 = (rand() % 5) + 0;
		
				do
				{
					random_bit2 = (rand() % 32) + 0;
				}while (random_bit1 == random_bit2)
				
				//sprawdza czy nie wylosował takich samych, jak tak to losuje dalej
	
				while (mutations[nextgene][random_bit1] == mutations[nextgene][random_bit2])
				{
					do
					{
					random_bit2 = (rand() % 32) + 0;
					}while (random_bit1 == random_bit2)
				}
				
				//sprawdza czy wartości nie są takie same, jak tak to losuje dalej
	
				char tmp = mutations[nextgene][random_bit1];
				mutations[nextgene][random_bit1] = mutations[nextgene][random_bit2];
				mutations[nextgene][random_bit2] = tmp;
				
				int x,y;
				if (random_bit1>random_bit2)
				{
					x=random_bit2;
					y=random_bit1;
				}
				else
				{
					x=random_bit1;
					y=random_bit2;
				}
					
				int i;
				hOut = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute( hOut, 0 );
				for (i=0;i<x;i++)
				{
					cout<<actualPopulation[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<actualPopulation[nextgene][x];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=x+1;i<y;i++)
				{
					cout<<actualPopulation[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<actualPopulation[nextgene][y];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=y+1;i<32;i++)
				{
					cout<<actualPopulation[nextgene][i];
				}
				cout<<" przemutował w gen";
				for (i=0;i<x;i++)
				{
					cout<<mutations[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<actualPopulation[nextgene][x];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=x+1;i<y;i++)
				{
					cout<<mutations[nextgene][i];
				}
				SetConsoleTextAttribute( hOut, 6 );
				cout<<mutations[nextgene][y];
				SetConsoleTextAttribute( hOut, 0 );
				for (i=y+1;i<32;i++)
				{
					cout<<mutations[nextgene][i];
				}
	
			}
		}
	}
	

	system("pause");
}

void bitflipMutation() // zamienia bit z 0 na 1 lub z 1 na 0
{
	mutations = actualPopulation;
	for (nextgene=0; nextgene<populationSize;nextgene++)
	{
	if (rand() % 100 < mutationchance)
	{
	random_bit1 = (rand() % 32) + 0;
	bitset<32> flipendo(mutations[nextgene]);
	flipendo.flip(random_bit1);
	mutations[nextgene] = flipendo.to_string();
	}
	
	int i;
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute( hOut, 0 );
	for (i=0;i<random_bit1;i++)
	{
		cout<<actualPopulation[nextgene][i];
	}
	SetConsoleTextAttribute( hOut, 6 );
	cout<<actualPopulation[nextgene][random_bit1];
	SetConsoleTextAttribute( hOut, 0 );
	for (i=random_bit1+1;i<32;i++)
	{
		cout<<actualPopulation[nextgene][i];
	}
	cout<<" przemutował w gen";
	for (i=0;i<random_bit1;i++)
	{
		cout<<mutations[nextgene][i];
	}
	SetConsoleTextAttribute( hOut, 6 );
	cout<<mutations[nextgene][random_bit1];
	SetConsoleTextAttribute( hOut, 0 );
	for (i=random_bit1+1;i<32;i++)
	{
		cout<<mutations[nextgene][i];
	}
	}
	system("pause");
}

void changeMutationChance(int much)
{
	mutationchance = much;
}
