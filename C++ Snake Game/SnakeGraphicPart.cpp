#include "SnakeGraphicPart.h"

SnakeGraphicPart::SnakeGraphicPart(float radius)
{
	circle.setRadius(radius);
}

void SnakeGraphicPart::setPosition(float x, float y)
{
	circle.setPosition(x, y);
}

sf::CircleShape SnakeGraphicPart::getGraphicShape()
{
	return circle;
}
