#include <iostream>
#include <vector>
#include <string>
#include "readFile.h"
#include "toBinary.h"
#include "toGray.h"

using namespace std;

vector<string> personVec[1];
vector <pair<string, string>> pairVec[2];



int main(int argc, char** argv)
{
	readFile();
	toBinary();

	return 0;
}
