#include "menu.h"
#include "mutation.h"

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
int getIntFromRange(int down,int up)
{
	int x;
	cin >> x;
	while ((cin.fail())||(x<down)||(x>up)) {
		cout << "Podaj liczbe z zakresu " << down<< " - "<< up << endl;
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
	cout << " 1. NKB" << endl << " 2. Kod GRAY'a" << endl << " 3. Powrot"<< endl;
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
	cout << " 1. Losowa negacja genu" << endl << " 2. Zamiana genow" << endl <<  endl << " 3. Inwersja ciągu genow" << endl << " 4.Wyjscie" << endl;
	cout << "Wybor: ";
	int choice = getIntFromRange(1, 5);
	if (choice == 4)
	{
		mainMenu();
	}

	if (choice == 3)
	{
		inversionMutation();
	}

	else if (choice == 2)
	{
		swapMutation();
	}
	else
	{
		bitflipMutation();
	}

}
void crossoverMenu(){}
void mainMenu()
{
	while (1)
	{
		system("cls");
		cout << "***** MENU GLOWNE *****" << endl;
		cout << " 1. Krzyzowanie" << endl << " 2. Mutacje" << endl << " 3. Wybor kodowania (domyslnie NKB)" << endl << " 4. Wyjscie" << endl;
		cout << "Wybor: ";
		int choice = getIntFromRange(1, 4);
		if (choice == 4)
		{
			system("pause");
			exit(EXIT_SUCCESS);
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
