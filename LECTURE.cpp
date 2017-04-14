#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable:4996)

using namespace std;
int main(void) {
	int iCount = 0;
	char ** charString = NULL;
	char ** desSting = NULL;
	char cTempSting[1000 + 1];

	cin >> iCount;
	charString = new char*[iCount];

	for (int i = 0; i < iCount; i++) {
		cin >> cTempSting;
		charString[i] = new char[strlen(cTempSting) + 1];
		strcpy(charString[i], cTempSting);
	}

	for (int i = 0; i < iCount; i++) {
		desSting = new char*[strlen(charString[i]) / 2];

		for (int j = 0; j < strlen(charString[i]) / 2; j++) {
			desSting[j] = new char[3];
			desSting[j][0] = charString[i][j * 2];
			desSting[j][1] = charString[i][j * 2 + 1];
			desSting[j][2] = NULL;
		}

		for (int j = 0; j < strlen(charString[i]) / 2; j++) {
			for (int k = j; k < strlen(charString[i]) / 2; k++) {
				if (strcmp(desSting[j], desSting[k]) < 1) {
					char * tmp = new char[3];
					strcpy(tmp, desSting[k]);
					strcpy(desSting[k], desSting[j]);
					strcpy(desSting[j], tmp);
				}
			}
		}
		string p = desSting[(strlen(charString[i]) / 2) - 1];
		for (int j = strlen(charString[i]) / 2 - 2; j >= 0; j--) {
			p.append(desSting[j]);
			delete[] desSting[j];
		}
		delete[] charString[i];
		cout << p << endl;
	}

	delete[] charString;
	delete[] desSting;

	return 0;
}
//int main(void) {
//	int iCount = 0;
//	char cTempSting[1001];
//	char cSting_Division[1000][3];
//	int strnum = 0;
//
//	cin >> iCount;
//
//	for (int i = 0; i < iCount; i++) {
//		cin >> cTempSting;
//		strnum = strlen(cTempSting);
//		for (int j = 0; j < strnum / 2; j++) {
//			cSting_Division[j][0] = cTempSting[j * 2];
//			cSting_Division[j][1] = cTempSting[j * 2 + 1];
//			cSting_Division[j][2] = NULL;
//		}
//
//		for (int j = 0; j < strnum / 2; j++) {
//			for (int k = j; k < strnum / 2; k++) {
//				if (strcmp(cSting_Division[j], cSting_Division[k]) > 0) {
//					char tmp[3];
//					strcpy(tmp, cSting_Division[k]);
//					strcpy(cSting_Division[k], cSting_Division[j]);
//					strcpy(cSting_Division[j], tmp);
//				}
//			}
//		}
//		for (int j = 0; j < strnum / 2; j++) {
//			cout << cSting_Division[j];
//		}
//
//		cout << endl;
//	}
//	return 0;
//}



