#include <iostream>

using namespace std;
void Transform(unsigned int * n);

int main(void) {
	int iCount = 0;
	unsigned int uiTemp[4];
	unsigned int * uiNumber;


	//cout << "������ ���� �Է� : ";
	cin >> iCount;

	// malloc�� �̿��� �����Ҵ�
	//uiNumber = (unsigned int*)malloc(sizeof(unsigned int) * iCount);

	// new �̿��� �����Ҵ�
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