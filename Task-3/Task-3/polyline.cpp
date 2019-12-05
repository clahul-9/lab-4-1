#include "polyline.h"
#include "Point2d.h"

//constructors
polyline::polyline()
{
}

//methods
Point2d polyline::retrievePoint(int index) {
	return nrOfPoints[index];
}
void polyline::newPoint(Point2d p){
	for (int i = 0; i <maxpPoints; i++)
	{
		if(	retrievePoint(i) =='\0'){}
	}
}


polyline::~polyline()
{
}
