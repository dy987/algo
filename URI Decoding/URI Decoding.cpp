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
		char temp[4] = { NULL };
		int inum = 0;		
		cin >> cTempSting;
		strnum = strlen(cTempSting);
		int num = 0;
		for (int j = 0; j < strnum; j++) {
			if (cTempSting[j] == '%') {
				temp[0] = cTempSting[j];
				temp[1] = cTempSting[j + 1];
				temp[2] = cTempSting[j + 2];
				j++;
				j++;
				if (0 == strcmp(temp, "%20")) {
					cDestStr[num++] = ' ';
				}
				else if (0 == strcmp(temp, "%21")) {
					cDestStr[num++] = '!';
				}
				else if (0 == strcmp(temp, "%24")) {
					cDestStr[num++] = '$';
				}
				else if (0 == strcmp(temp, "%25")) {
					cDestStr[num++] = '%';
				}
				else if (0 == strcmp(temp, "%28")) {
					cDestStr[num++] = '(';
				}
				else if (0 == strcmp(temp, "%29")) {
					cDestStr[num++] = ')';
				}
				else if (0 == strcmp(temp, "%2a")) {
					cDestStr[num++] = '*';
				}
			}
			else
				cDestStr[num++] = cTempSting[j];
		}
		cout << cDestStr << endl;
	}
	return 0;
}




	