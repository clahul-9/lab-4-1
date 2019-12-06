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
	points = new Point2d*[maxpPoints];
	for (int i = 0; i < maxpPoints; i++)
	{
		points[i] = nullptr;
	}

}

//methods

Point2d* polyline::retrievePoint(int index) {
	return points[index];
}
//returns false if no points exist else true
bool polyline::containsPoints() {
	if (retrievePoint(0) == nullptr) { return false; }
	else { return true; }
}
//returns number of points
int polyline::nrOfPoints() {
	if (containsPoints())
	{
		for (int i = 0; i < maxpPoints; i++)
		{
			if (retrievePoint(i) == nullptr)
			{
				return i;
			}
			else if (i + 1 == maxpPoints)
			{
				return i + 1;
			}
		}
	}
	return 0;
}
//adds a newpoint at the end
void polyline::newPoint(Point2d *p){
	points[nrOfPoints()] = new Point2d(*p);
}
//removes the last point
void polyline::removeLast() {
	if (containsPoints()) { points[nrOfPoints()-1] = nullptr; }
	else
	{
		cout << "no elements to remove" << endl;
	}
}
//calculets the leangt of the polyline
float polyline::leangtOfPolyLine(){
	float totalLeangt=0;
	for (int i = 0; i <nrOfPoints()-1; i++)
	{
		Point2d p1 = *(points[i]);
		Point2d p2 = *(points[i+1]);

		totalLeangt = p1.distance(p2);
	}
	return totalLeangt;
}

void polyline::print() {
	for (int i = 0; i < nrOfPoints(); i++)
	{
		cout<<(*retrievePoint(i)).toString()<<endl;
	}
}

polyline::~polyline()
{
	for (int i = 0; i < maxpPoints; i++)
	{
		delete points[i];
	}
	delete[] points;
}
