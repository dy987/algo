#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

vector<int> getDivisor(int num) {
	vector<int> temp;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0)
			temp.push_back(i);
	}
	return temp;
}

int getSum(vector<int> picked) {
	vector<int>::iterator end = picked.end();
	vector<int>::iterator itr = picked.begin();
	int sum = 0;
	for (itr; itr != end; itr++)
		sum += *itr;

	return sum;
}


void printVector(vector<int> picked) {
	vector<int>::iterator end = picked.end();
	vector<int>::iterator itr = picked.begin();

	for (itr; itr != end; itr++)
		cout << *itr << " ";
		cout << endl;
}


bool weirdExit(vector<int> picked, int sum, int target, int index) {
	if (sum == target)
		return true;

	if (sum < target || target < 0)
		return false;


	int last = picked[index];
	if (weirdExit(picked, sum - last, target - last, index - 1))
		return true;

	return weirdExit(picked, sum - last, target, index - 1);
}

void print(bool weird) {
	if (!weird) {
		cout << "not ";
	}
	cout << "weird" << endl;
}


int main(void) {
	vector<int> picked;

	int count = 0;
	int num = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> num;
		picked = getDivisor(num);
		//printVector(picked);
		print(getSum(picked) > num && !weirdExit(picked, getSum(picked), num, picked.size()-1));
	}

	return 0;
}
