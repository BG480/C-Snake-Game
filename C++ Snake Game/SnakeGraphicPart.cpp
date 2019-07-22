#include "SnakePart.h"

SnakePart::SnakePart(float radius)
{
	circle.setRadius(radius);
}

void SnakePart::setPosition(float x, float y)
{
	circle.setPosition(x, y);
}

sf::CircleShape SnakePart::getGraphicShape()
{
	return circle;
}
