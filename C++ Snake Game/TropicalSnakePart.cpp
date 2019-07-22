#include "TropicalSnakePart.h"

TropicalSnakePart::TropicalSnakePart(float radius)
{
	circle.setRadius(radius);
}

void TropicalSnakePart::setPosition(float x, float y)
{
	circle.setPosition(x, y);
}

sf::CircleShape TropicalSnakePart::getGraphicShape()
{
	return circle;
}
