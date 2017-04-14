#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main(void) {
	int iCount = 0;
	
	
	int strnum = 0;

	cin >> iCount;

	for (int i = 0; i < iCount; i++) {
		char cTempSting[80 + 1] = { NULL };
		char cDestStr[80 + 1] = { NULL };
		int inum = 0;
		cin >> inum;
		cin >> cTempSting;
		strnum = strlen(cTempSting);
		int num = 0;
		for (int j = 0; j < strnum; j++) {
			if (j == inum-1) {
				continue;
			}
			cDestStr[num++] = cTempSting[j];
		}
		cout << i+1<<" " <<cDestStr<< endl;
		cout << endl;
	}
	return 0;
}



