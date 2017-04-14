#include <iostream>

using namespace std;
void Transform(unsigned int * n);

int main(void) {
	int iCount = 0;
	unsigned int uiTemp[4];
	unsigned int * uiNumber;


	//cout << "데이터 갯수 입력 : ";
	cin >> iCount;

	// malloc을 이용한 동적할당
	//uiNumber = (unsigned int*)malloc(sizeof(unsigned int) * iCount);

	// new 이용한 동적할당
	uiNumber = new unsigned int [iCount];

	//cout << iCount << endl;
	for(int i =0; i < iCount;i++){
		cin >> uiNumber[i];
	}

	for (int i = 0; i < iCount; i++) {
		Transform(&uiNumber[i]);
	}

	//free(uiNumber);
	delete [] uiNumber ;
	return 0;
}

void Transform(unsigned int * n) {
	cout << ((*n % 256) << 24) + (((*n>>8) % 256) << 16) + (((*n >> 16) % 256) << 8) + (((*n >> 24) % 256)) << endl;
}