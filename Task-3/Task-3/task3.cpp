#include "Point2d.h"
#include "polyline.h"
#include <iostream>

using namespace std;
int main() {
	polyline pLine(5);
	Point2d p1(0, 5), p2(5, 5), p3(5, 10), p4(0, 5), p5(10, 5);
	Point2d *ptr1 = &p1, *ptr2 = &p2, *ptr3 = &p3, *ptr4 = &p4, *ptr5 = &p5;

	pLine.newPoint(ptr1);
	pLine.newPoint(ptr2);
	pLine.newPoint(ptr3);
	pLine.newPoint(ptr4);
	pLine.newPoint(ptr5);

	cout << "Orginal polyline: " << endl;
	cout<<pLine.leangtOfPolyLine()<<endl;
	pLine.print();

	pLine.removeLast();

	cout << endl << "Polyline - last point: " << endl;
	cout<<pLine.leangtOfPolyLine()<<endl;
	pLine.print();

	system("pause");
}