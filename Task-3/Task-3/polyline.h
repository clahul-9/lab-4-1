#pragma once
#include "Point2d.h"
class polyline
{
	int maxpPoints;
	Point2d *(*points);
public:
	//constructors
	polyline();
	polyline(int maxPoints);
	~polyline();

	//metods
	Point2d *retrievePoint(int index);
	void newPoint(Point2d  *p);
	bool containsPoints();
	void removeLast();
	int nrOfPoints();
	float leangtOfPolyLine();
	void print();
};

