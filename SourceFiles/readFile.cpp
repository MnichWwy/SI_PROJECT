#include "readFile.h"

void readFile()
{
	/*					GOTOWE OTWIERANIE PO NAZWIE, DO TESTOW WYGODNIEJ NA STALE USTAWIC NAZWE
	string fileName;
	cout << "Podaj nazwe pliku: ";
	cin >> fileName;
	ifstream data(fileName.c_str*/

	ifstream data("Family_01.txt");

	if (!data)
	{
		cout << "Blad otwarcia pliku! Program zostaje zamkniety...";
		EXIT_FAILURE;
	}
	while (!data.eof())
	{
		char c;
		data.get(c);

		if (c == 'p')
		{
			data.get(c);
			if (c == 'e') //person
			{
				for (int i = 0; i < 5; i++)
				{
					data.get(c);
				}
				//dochodzimy do imienia
				int i = 0;
				string line;
				do
				{
					data.get(c);
					if (c != ',') line.insert(line.end(), c);
					i++;
				} while (c != ',');

				personVec[0].push_back(line);
				getline(data, line);

				//UWAGA, ZAKLADAM ZE PLEC NIE MA ZNACZENIA
			}
			else //parent
			{
				for (int i = 0; i < 5; i++)
				{
					data.get(c);
				}
				//dochodzimy do imienia

				string firstName;
				string secondName;
				do
				{
					data.get(c);
					if (c != ',') firstName.insert(firstName.end(), c);
				} while (c != ',');
				do
				{
					data.get(c);
					if (c != ')') secondName.insert(secondName.end(), c);

				} while (c != ')');

				pairVec[PARENT].push_back(make_pair(firstName, secondName));
				getline(data, firstName);
			}
		}
		else //married
		{
			for (int i = 0; i < 7; i++)
			{
				data.get(c);
			}
			//dochodzimy do imienia

			string firstName;
			string secondName;
			do
			{
				data.get(c);
				if (c != ',') firstName.insert(firstName.end(), c);
			} while (c != ',');
			do
			{
				data.get(c);
				if (c != ')') secondName.insert(secondName.end(), c);

			} while (c != ')');

			pairVec[MARRIED].push_back(make_pair(firstName, secondName));
			getline(data, firstName);
		}
	}


	data.close();
	cout << "PERSON:" << endl;
	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
		cout << *it << endl;
	}
	cout << "PARENT:" << endl;
	for (auto it = pairVec[PARENT].begin(); it != pairVec[PARENT].end(); it++)
	{
		cout << (it->first) << "," << (it->second) << endl;
	}
	cout << "MARRIED:" << endl;
	for (auto it = pairVec[MARRIED].begin(); it != pairVec[MARRIED].end(); it++)
	{
		cout << (it->first) << "," << (it->second) << endl;
	}
	int a;
	cin >> a;
}
