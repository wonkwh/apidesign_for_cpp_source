

#include "coord2d.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int, char **)
{
	// create a new double-precision 2D coordinate 
	apibook::Coord2D<double> coord(0.0, 0.0);
	// change the coordinate
	coord.Add(1.0, 2.0);

	// output the current value of the coordinate
	cout << "Coord = " << coord.GetX() << ", " << coord.GetY() << endl;

	return 0;
}
