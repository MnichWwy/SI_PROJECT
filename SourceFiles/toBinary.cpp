#include "toBinary.h"

void toBinary()
{
	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
		string temp=nullptr;
		for (std::size_t i = 0; i < it->size(); ++i)
		{
			bitset<8> b(it->c_str()[i]);
			temp += b.to_string();
		}
		*it = temp;

	}

	cout << "PERSON:" << endl;
	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
		cout << *it << endl;
	}
}