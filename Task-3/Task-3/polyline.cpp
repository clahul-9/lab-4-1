#include "polyline.h"
#include "Point2d.h"
#include <array>
#include <iostream>

using namespace std;
//constructors
polyline::polyline()
{
}
polyline::polyline(int maxPointsIn) {
	maxpPoints = maxPointsIn;
	Point2d *points = new Point2d[maxpPoints];
	for (int i = 0; i < maxpPoints; i++)
	{
		points[i] = nullptr;
	}

}

//methods
Point2d polyline::retrievePoint(int index) {
	return points[index];
}
void polyline::newPoint(Point2d p){
	Point2d test(0, 0);
	int index ='\0';

	for (int i = 0; i <maxpPoints; i++){if (retrievePoint(i) == test) { index = i; }}

	if (index != '\0'){points[index] = p;}
	else if (index =='\0'){cout << "Error: array is full"<<endl;}
}


polyline::~polyline()
{
}
