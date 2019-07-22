#include "ArcticSnakePart.h"

ArcticSnakePart::ArcticSnakePart(float radius)
{
	circle.setRadius(radius);
}

void ArcticSnakePart::setPosition(float x, float y)
{
	circle.setPosition(x, y);
}

sf::CircleShape ArcticSnakePart::getGraphicShape()
{
	return circle;
}
