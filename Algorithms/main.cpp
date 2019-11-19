#include <iostream>
#include "RockFestival.h"
#include "MinMaxSquare.h"

using namespace std;

void main() {
	cout << "hello world" << endl;

	MinMaxSquare mms;

	int x[11] = { 0, 5, 0, 5, 5, 6, 10, 6, 10, -10, -10 };
	int y[11] = { 0, 0, 5, 5, 6, 5, 10, 6, -10, 10, -10 };

	Point *points = mms.Order(11, x, y);

	for (int i = 0; i < 11; i++) {
		cout << (points + i * sizeof(Point))->x << ", " << (points + i * sizeof(Point))->y << endl;
	}
	
	return;
}