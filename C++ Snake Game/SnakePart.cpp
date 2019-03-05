#include "ElementCoordinates.h"

ElementCoordinates::ElementCoordinates(int xPosition, int yPosition): x(xPosition), y(yPosition)
{
}

int ElementCoordinates::getX()
{
	return x;
}

int ElementCoordinates::getY()
{
	return y;
}

void ElementCoordinates::setX(int xPosition)
{
	x = xPosition;
}

void ElementCoordinates::setY(int yPosition)
{
	y = yPosition;
}
