#include "ElementCoordinates.h"

ElementCoordinates::ElementCoordinates(int x_pos, int y_pos): x(x_pos), y(y_pos)
{
}

int ElementCoordinates::GetX()
{
	return x;
}

int ElementCoordinates::GetY()
{
	return y;
}

void ElementCoordinates::SetX(int x_pos)
{
	x = x_pos;
}

void ElementCoordinates::SetY(int y_pos)
{
	y = y_pos;
}
