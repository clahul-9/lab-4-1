#include "Point2d.h"
#include <iostream>
int main() {
	Point2d list[7];
	for (int i = 0; i < 4; i++)
	{
		Point2d p(6,0);
		list[i] = p;
	}
	for (Point2d e:list)
	{
		std::cout << e.toString() << std::endl;
	}
	system("pause");
}