#include "toBinary.h"

void toBinaryPerson()
{
	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
		string temp;
		for (size_t i = 0; i < (*it).size(); ++i)
		{
			bitset<8> b((*it).c_str()[i]);
			temp += b.to_string();
		}
		*it = temp;

	}

}
void toBinaryPairs()
{
	for (auto it = pairVec[PARENT].begin(); it != pairVec[PARENT].end(); it++)
	{
		string temp,temp1;
		for (size_t i = 0; i < (*it).first.size(); ++i)
		{
			bitset<8> b((*it).first.c_str()[i]);
			temp += b.to_string();
		}
		(*it).first = temp;
		for (size_t i = 0; i < (*it).second.size(); ++i)
		{
			bitset<8> b((*it).second.c_str()[i]);
			temp1 += b.to_string();
		}
		(*it).second = temp1;
	}

	for (auto it = pairVec[MARRIED].begin(); it != pairVec[MARRIED].end(); it++)
	{
		string temp, temp1;
		for (size_t i = 0; i < (*it).first.size(); ++i)
		{
			bitset<8> b((*it).first.c_str()[i]);
			temp += b.to_string();
		}
		(*it).first = temp;
		for (size_t i = 0; i < (*it).second.size(); ++i)
		{
			bitset<8> b((*it).second.c_str()[i]);
			temp1 += b.to_string();
		}
		(*it).second = temp1;
	}
}