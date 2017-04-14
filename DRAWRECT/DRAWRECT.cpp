#include <iostream>

using namespace std;
typedef struct point_struct {
	unsigned int x[4];
	unsigned int y[4];
}Point;

void Find_Point(Point * n);

int main(void) {
	int iCount = 0;
	Point * point_location;

	cin >> iCount;
	point_location = new Point[iCount];

	for (int i = 0; i < iCount; i++) {
		cin >> point_location[i].x[0];
		cin >> point_location[i].y[0];

		cin >> point_location[i].x[1];
		cin >> point_location[i].y[1];

		cin >> point_location[i].x[2];
		cin >> point_location[i].y[2];
	}

	for (int i = 0; i < iCount; i++) {
		Find_Point(&point_location[i]);
	}

	//free(uiNumber);
	delete[] point_location;
	return 0;
}

void Find_Point(Point * n) {

	unsigned int x = 0;
	unsigned int y = 0;


	if (n->x[0] == n->x[1])
		x = n->x[2];
	else if (n->x[1] == n->x[2])
		x = n->x[0];
	else
		x = n->x[1];


	if (n->y[0] == n->y[1])
		y = n->y[2];
	else if (n->y[1] == n->y[2])
		y = n->y[0];
	else
		y = n->y[1];

	cout << x << " " << y << endl;

}