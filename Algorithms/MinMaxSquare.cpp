//#include<iostream>
#include"MinMaxSquare.h"
#include <iostream>

MinMaxSquare::MinMaxSquare() {

}
MinMaxSquare::~MinMaxSquare() {

}

void MinMaxSquare::FindSquare(int numberOfPoints, Point points[])	{

	int index = 0;

	while (index < numberOfPoints) {

		int currentX = (points + index * sizeof(Point))->x;



	}


	return;
}

Point* MinMaxSquare::Order(int numberOfPoints, Point points[]) {

	Point *arr = points;

	for (int i = 0; i < numberOfPoints - 1; i++)
	{
		int currentX = arr->x;
		int currentY = arr->y;

		for (int j = i + 1; j < numberOfPoints; j++) {

		}
			
	}

	return arr;
}

Point* MinMaxSquare::Order(int numberOfPoints, int x[], int y[]) {

	// x sort
	for (int i = 0; i < numberOfPoints - 1; i++) {

		for (int j = i + 1; j < numberOfPoints; j++) {

			// swap
			if (x[i] >= x[j]) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}

	// y sort
	for (int i = 0; i < numberOfPoints - 1; i++) {

		for (int j = i + 1; j < numberOfPoints; j++) {

			// swap
			if (y[i] >= y[j]) {
				int temp = y[i];
				y[i] = y[j];
				y[j] = temp;
			}
		}
	}
	
	// Make Points
	Point* points = new Point[numberOfPoints];
	for (int i = 0; i < numberOfPoints; i++) {
		(points + i * sizeof(Point))->x = x[i];
		(points + i * sizeof(Point))->y = y[i];
	}

	return points;
}

int MinMaxSquare::FindValueWithK(int listLength, int *list, int findValue, int k, int locations) {

	int findIndex = -1;
	int index = 0;

	while (index < listLength) {

		int tValue = *(list + index * sizeof(int));
		
		// find value.
		if (tValue == findValue) {
			findIndex = index;
			break;
		}

		if (tValue < findValue) {
			// add k
			index += k;

			// out of length.
			if (index > listLength) {

			}
		}
		else {


		}
	}

	return findIndex;
}