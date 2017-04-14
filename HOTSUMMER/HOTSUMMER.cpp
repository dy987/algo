#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main(void) {
	int iCount = 0;
	int strnum = 0;
	int A[9] = { 0 };
	cin >> iCount;

	for (int i = 0; i < iCount; i++) {
		int target = 0;
		int sum = 0;
		char c;
		cin >> target;
		cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4] >> A[5] >> A[6] >> A[7] >> A[8];
		for(int j = 0; j < 9 ; j ++){
			sum += A[j];
		}
		if (sum <= target) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}



