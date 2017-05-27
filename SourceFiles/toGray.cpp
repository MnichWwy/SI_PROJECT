#include "toGray.h"

void toGrayPerson()
{
	toBinaryPerson();

	for (auto it = personVec[0].begin(); it != personVec[0].end(); it++)
	{
		string temp;
		for (size_t i = 1; i < (*it).size(); ++i)
		{
			if ((((*it).c_str()[i] == '1') && ((*it).c_str()[i - 1]) == '1') || (((*it).c_str()[i] == '0') && ((*it).c_str()[i - 1]) == '0'))
			{
				temp += '0';
			}
			else
			{
				temp += '1';
			}
		}
		*it = temp;
	}
}

void toGrayPairs()
{
	toBinaryPairs();

	for (auto it = pairVec[PARENT].begin(); it != pairVec[PARENT].end(); it++)
	{
		string temp;
		for (size_t i = 1; i < (*it).first.size(); ++i)
		{
			if ((((*it).first.c_str()[i] == '1') && ((*it).first.c_str()[i - 1]) == '1') || (((*it).first.c_str()[i] == '0') && ((*it).first.c_str()[i - 1]) == '0'))
			{
				temp += '0';
			}
			else
			{
				temp += '1';
			}
		}
		(*it).first = temp;


		for (size_t i = 1; i < (*it).second.size(); ++i)
		{
			if ((((*it).second.c_str()[i] == '1') && ((*it).second.c_str()[i - 1]) == '1') || (((*it).second.c_str()[i] == '0') && ((*it).second.c_str()[i - 1]) == '0'))
			{
				temp += '0';
			}
			else
			{
				temp += '1';
			}
		}
		(*it).second = temp;

	}

	for (auto it = pairVec[MARRIED].begin(); it != pairVec[MARRIED].end(); it++)
	{
		string temp;
		for (size_t i = 1; i < (*it).first.size(); ++i)
		{
			if ((((*it).first.c_str()[i] == '1') && ((*it).first.c_str()[i - 1]) == '1') || (((*it).first.c_str()[i] == '0') && ((*it).first.c_str()[i - 1]) == '0'))
			{
				temp += '0';
			}
			else
			{
				temp += '1';
			}
		}
		(*it).first = temp;

		for (size_t i = 1; i < (*it).second.size(); ++i)
		{
			if ((((*it).second.c_str()[i] == '1') && ((*it).second.c_str()[i - 1]) == '1') || (((*it).second.c_str()[i] == '0') && ((*it).second.c_str()[i - 1]) == '0'))
			{
				temp += '0';
			}
			else
			{
				temp += '1';
			}
		}
		(*it).second = temp;
	}
}