#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "readFile.h"
#include "toBinary.h"
#include "toGray.h"

using namespace std;

vector<string> personVec[1];
vector <pair<string, string>> pairVec[2];



int main(int argc, char** argv)
{
	system("cls");
	readFile();
	toGrayPairs();
	system("pause");
	return 0;
}
