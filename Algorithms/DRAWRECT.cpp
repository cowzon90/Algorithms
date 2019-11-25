#include <iostream>
#include "DRAWRECT.h"

using namespace std;

void DRAWRECT::Run() {

	// Find last point of rectangle when 3 points given.
	// (1, 1) is left top.
	// (1000, 1000) is right bottom.

	// Read test case.
	int testCase;
	cin >> testCase;

	int *x = new int[testCase * 3];
	int *y = new int[testCase * 3];

	// Read values
	for (int i = 0; i < testCase * 3; i++) {
		cin >> x[i] >> y[i];
	}

	// Find point
	for (int i = 0; i < testCase; i++) {

		int index = i * 3;

		int findX;
		if (x[index] == x[index + 1]) {
			findX = x[index + 2];
		}
		else if (x[index] == x[index + 2]) {
			findX = x[index + 1];
		}
		else {
			findX = x[index];
		}

		int findY;
		if (y[index] == y[index + 1]) {
			findY = y[index + 2];
		}
		else if (y[index] == y[index + 2]) {
			findY = y[index + 1];
		}
		else {
			findY = y[index];
		}
		
		cout << findX << " " << findY << endl;
	}

}