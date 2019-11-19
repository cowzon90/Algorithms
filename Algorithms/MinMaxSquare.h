#pragma once
#ifndef _MINMAXSQUARE_
#define _MINMAXSQUARE_

struct Point {
	int x;
	int y;
};

class MinMaxSquare {
public :
	MinMaxSquare();
	~MinMaxSquare();
	void FindSquare(int numberOfPoints, Point points[]);
	Point* Order(int numberOfPoints, Point points[]);
	Point* Order(int numberOfPoints, int x[], int y[]);

	int FindValueWithK(int listLength, int *list, int findValue, int k, int locations = 0);
};

#endif // !_MINMAXSQUARE_
