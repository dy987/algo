#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable:4996)

using namespace std;

double WeightToPound(double v) {
	double value = v*2.2046;
	return value;
}

double PoundToWeight(double v) {
	double value = v*0.4536;
	return value;
}

double LiterToGallons(double v) {
	double value = v*0.2642;
	return value;
}

double GallonsToLiter(double v) {
	double value = v*3.7854;
	return value;
}

int main(void) {
	int iCount = 0;
	int strnum = 0;

	cin >> iCount;

	for (int i = 0; i < iCount; i++) {
		char cDestStr[80 + 1] = { NULL };
		double inum = 0;
		cin >> inum;
		cin >> cDestStr;

		cout << fixed;
		cout.precision(4);

		if (strcmp(cDestStr, "kg") == 0) {
			cout << i + 1 << " " << WeightToPound(inum) << " lb" << endl;
		}
		else if (strcmp(cDestStr, "l") == 0) {
			cout << i + 1 << " " << LiterToGallons(inum) << " g" << endl;
		}
		else if (strcmp(cDestStr, "lb") == 0) {
			cout << i + 1 << " " << PoundToWeight(inum) << " kg" << endl;
		}
		else if (strcmp(cDestStr, "g") == 0) {
			cout << i + 1 << " " << GallonsToLiter(inum) << " l" << endl;

		}
	}
	return 0;
}



