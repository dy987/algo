#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable:4996)
using namespace std;

int main(void) {
	int iCount = 0;

	cin >> iCount;


	for (int i = 0; i < iCount; i++) {

		char cTempSting[100 + 1] = { 0, };
		char desSting[100 + 1] = { 0,};

		cin >> cTempSting;

		int strnum = (int)strlen(cTempSting);


		int halfnum = (strnum + 1) / 2;

		for (int j = 0; j < strnum; j++) {
			if (j < halfnum) {
				desSting[j] = cTempSting[j * 2];
			}
			else {
				desSting[j] = cTempSting[(j - halfnum) * 2 + 1];
			}
		}


		cout << desSting << endl;
	}

	return 0;
}

