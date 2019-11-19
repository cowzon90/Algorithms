#pragma once
#ifndef MINMAXSQUARE.CPP
#define MINMAXSQUARE.CPP

struct Point {
	int x;
	int y;
};

class MinMaxSquare {
public :
	MinMaxSquare();
	void FindSquare(int numberOfPoints, Point points[]);
	Point* Order(int numberOfPoints, Point points[]);
	Point* Order(int numberOfPoints, int x[], int y[]);
};

#endif // !MINMAXSQUARE.CPP
