#include "toBinary.h"

void toBinary()
{
	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
			*it = std::bitset<8>(*it).to_string();	
	}

	cout << "PERSON:" << endl;
	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
		cout << *it << endl;
	}
}