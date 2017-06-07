#include "menu.h"


int getInt()
{
	int x;
	cin >> x;
	while (cin.fail()) {
		cout << "Podaj liczbe" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
	return x;
}
int getIntFromRange(int down, int up)
{
	int x;
	cin >> x;
	while ((cin.fail()) || (x<down) || (x>up)) {
		cout << "Podaj liczbe z zakresu " << down << " - " << up << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
	return x;
}
void codingMetodMenu()
{
	system("cls");
	cout << "***** MENU KODOWANIA *****" << endl;
	cout << " 1. NKB" << endl << " 2. Kod GRAY'a" << endl << " 3. Powrot" << endl;
	int choice = getIntFromRange(1, 3);
	if (choice == 3)
	{
		system("pause");
		exit(EXIT_SUCCESS);
	}
	if (choice == 1)
	{
		toBinaryPerson();
		toBinaryPairs();
		cout << endl << "Wybrano kodowanie NKB" << endl;
		system("pause");
		return;
	}
	else
	{
		toGrayPerson();
		toGrayPairs();
		cout << endl << "Wybrano kodowanie w kodzie GRAY'a" << endl;
		system("pause");
		return;
	}
}
void mutationsMenu()
{
	system("cls");
	cout << "***** MUTACJA *****" << endl;
	cout << "Wybierz rodzaj mutacji lub wybierz 5, aby wyjsc do poprzedniego menu" << endl;
	cout << " 1. Zmiana prawdopodobienstwa mutacji" << endl<< " 2. Losowa negacja genu" << endl << " 3. Zamiana genow" << endl << endl << " 4. Inwersja ciagu genow" << endl << " 5.Wyjscie" << endl;
	cout << "Wybor: ";
	int choice = getIntFromRange(1, 5);
	if (choice == 5)
	{
		mainMenu();
	}

	if (choice == 4)
	{
		inversionMutation();
	}

	else if (choice == 3)
	{
		swapMutation();
	}
	else if (choice == 2)
	{
		bitflipMutation();
	}
	
	else
	{
		int much=0;
		cout << "Podaj prawdopodobienstwo (liczbe %): " <<endl;
		cin >> much;
		changeMutationChance(much);
	}

}

void crossoverMenu()
{
	system("cls");
	cout << "***** KRZYZOWANIE *****" << endl;
	cout << " 1. Ustal prawdopodobienstwo krzyzowania (domyslnie 0.7)" << endl << " 2. Wybierz rodzaj krzyzowania (domyslnie jednopunktowe)" << endl << " 3. Wyjscie" << endl;
	cout << "Wybor: ";
	int choice = getIntFromRange(1, 3);
	if (choice == 3)
	{
		mainMenu();
	}
	if (choice == 1)
	{
		cout << "Podaj prawdopodobienstwo krzyzowania: ";
		cin >> crossingProb;
	}
	else if (choice == 2)
	{
		cout << "1. Krzyzowanie jednopunktowe." << endl << "2. Wyjscie"<<endl;
		int choice2 = getIntFromRange(1, 2);
		if (choice2 == 2)
		{
			mainMenu();
		}
		if (choice2 == 1)
		{
			
		}
	}	
}

void fitnessMenu()
{
	system("cls");
	cout << "***** FUNKCJA PRZYSTOSOWANIA *****" << endl;
	cout << "x = wartosc dziesietna chromosomu, y = liczba '1' w chromosomie" << endl;
	cout << " 1. x*x + 4 * y" << endl << " 2. x*x*y" << endl << " 3. y*y + 2 * x" << endl <<" 4. Wyjscie" << endl;
	cout << "Wybor: ";
	int choice = getIntFromRange(1, 4);
	if (choice == 4)
	{
		mainMenu();
	}
	if (choice == 1)
	{
		fitnessNumber = 1;
	}
	else if (choice == 2)
	{
		fitnessNumber = 1;
	}
	else if (choice == 3)
	{
		fitnessNumber = 3;
	}
}

void showMenu()
{
	system("cls");
	fitnessFunction(fitnessNumber);
	sortByFitness();
	selectChromosome();
	singlePointCrossover();
	showInRow();
	system("pause");
	cout <<endl << endl << "1. Wyjscie" << endl;
	if (getIntFromRange(1, 1) == 1) mainMenu;

}

void mainMenu()
{
	while (1)
	{
		system("cls");
		cout << "***** MENU GLOWNE *****" << endl;
		cout << " 1. Krzyzowanie" << endl << " 2. Mutacje" << endl << " 3. Wybor kodowania (domyslnie NKB)" << endl << " 4. Funkcja przystosowania" << endl << " 5. Wyswietlanie" << endl << " 6. Wyjscie" << endl;
		cout << "Wybor: ";
		int choice = getIntFromRange(1, 6);
		if (choice == 6)
		{
			system("pause");
			exit(EXIT_SUCCESS);
		}
		if (choice == 5)
		{
			showMenu();
		}
		if (choice == 4)
		{
			fitnessMenu();
		}
		if (choice == 3)
		{
			codingMetodMenu();
		}
		else if (choice == 2)
		{
			mutationsMenu();
		}
		else
		{
			crossoverMenu();
		}
	}
}
