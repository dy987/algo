#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#pragma warning(disable:4996)
using namespace std;



class Boggle {
public:
	// 게임판의 정보를 저장한다
	vector<string> board;

	bool inRange(int y, int x) {

		if (y < 0 || y >4 || x < 0 || x > 4)
			return false;
		else
			return true;
	}

	bool hasWord(int y, int x, const string& word) {
		const int dx[8] = { +1, +1, +1, -1, -1, -1, 0, 0 };
		const int dy[8] = { -1, 0, +1, -1, 0, 1, -1, 1 };

		if (!inRange(y, x))
			return false;

		if (board[y][x] != word[0])
			return false;

		if (word.size() == 1)
			return true;

		for (int dir = 0; dir < 8; ++dir) {
			int nextY = y + dy[dir];
			int nextX = x + dx[dir];

			if (hasWord(nextY, nextX, word.substr(1)))
				return true;
		}
		return false;
	}

	void run()
	{
		board.push_back("URLPM");
		board.push_back("XPRET");
		board.push_back("GIAET");
		board.push_back("XTNZY");
		board.push_back("HOQRS");
		cout << (hasWord(1, 1, "PRETTY"));
		cout << (hasWord(2, 0, "GIRL"));
		cout << (hasWord(4, 0, "HONEY"));
		cout << (!hasWord(1, 1, "PRETTMY"));
		cout << (!hasWord(2, 0, "GIRAL"));
	}
};

void main(void) {

	Boggle().run();
	return;
}
