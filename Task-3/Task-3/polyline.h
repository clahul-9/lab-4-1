#pragma once
#include "Point2d.h"
class polyline
{
	int maxpPoints;
	Point2d *nrOfPoints = new Point2d[maxpPoints];
public:
	//constructors
	polyline();
	polyline(int maxPoints);
	~polyline();

	//metods
	Point2d retrievePoint(int index);
	void newPoint(Point2d  p);


};

