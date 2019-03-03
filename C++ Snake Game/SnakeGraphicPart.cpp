#include "SnakeGraphicPart.h"

SnakeGraphicPart::SnakeGraphicPart(float radius)
{
	circle.setRadius(radius);
}

void SnakeGraphicPart::SetPosition(float x, float y)
{
	circle.setPosition(x, y);
}

sf::CircleShape SnakeGraphicPart::GetGraphicShape()
{
	return circle;
}
