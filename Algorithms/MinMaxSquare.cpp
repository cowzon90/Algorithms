//#include<iostream>
#include"MinMaxSquare.h"

MinMaxSquare::MinMaxSquare() {

}

void MinMaxSquare::FindSquare(int numberOfPoints, Point points[])	{



	return;
}

Point* MinMaxSquare::Order(int numberOfPoints, Point points[]) {

	Point* arr = points;

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

	// make points
	Point* points;
	for (int i = 0; i < numberOfPoints; i++) {
		(points + i)->x = x[i];
		(points + i)->y = y[i];
	}

	return points;
}