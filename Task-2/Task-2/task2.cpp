#include "Point2d.h"
#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
	Point2d p1(10, 15);
	Point2d p2(5, 25);

	cout << "Distens betwen p1 & p2: " << (p1.distance(p2)) << endl;
	cout << endl;
	Point2d pC = p1;
	
	cout << "Copy point: " << pC.toString() << endl;
	cout << "p1: " << p1.toString() << "=>" << (p1 == pC )<< endl;
	cout << "p2: " << p2.toString() << "=>" << (p2 == pC)<<endl;

	cout << endl;

	Point2d pp = p2 + pC;

	cout << "p3" << pp.toString() << endl;
	cout << "Distens betwen p3 & \np1 => " << pp.distance(p1) << "\np2 => " << pp.distance(p2) << "\ncopy p => " << pp.distance(pC) << endl;
	cout << endl;

	cout << "p3: " << pp.toString() << endl;
	cout << "p1: " << p1.toString() << "=>" << (p1 == pp) << endl;
	cout << "p2: " << p2.toString() << "=>" << (p2 == pp) << endl;
	cout << "copy p: " << pC.toString() << "=>" << (pC == pp) << endl;

	cout << endl;

	system("pause");
}