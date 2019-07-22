#include "DesertSnakePart.h"


DesertSnakePart::DesertSnakePart(float radius)
{
	circle.setRadius(radius);
}

void DesertSnakePart::setPosition(float x, float y)
{
	circle.setPosition(x, y);
}

sf::CircleShape DesertSnakePart::getGraphicShape()
{
	return circle;
}

