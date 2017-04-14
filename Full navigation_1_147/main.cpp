#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#pragma warning(disable:4996)
using namespace std;


void printfPicked(vector<int>& picked) {
	for (int i = 0; i < picked.size(); i++)
		cout << picked[i] << " ";
	cout << endl;
}

void pick(int n, vector<int>& picked, int toPick) {
	
	if (toPick == 0) {
		printfPicked(picked); 
		return; 
	}

	int smallest = picked.empty() ? 0 : picked.back() + 1;

	for (int next = smallest; next < n; ++next) {
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}

void main(void) {
	vector<int> picked;
	picked.push_back(1);
	picked.push_back(2);
	picked.push_back(3);

	printfPicked(picked);
	
	picked.pop_back();
	printfPicked(picked);
	
	picked.push_back(4);
	picked.push_back(5);
	picked.pop_back();
	
	printfPicked(picked);
	//pick(6, picked, 3);
	return;
}
