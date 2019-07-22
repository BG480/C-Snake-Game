#include "ArcticFood.h"

ArcticFood::ArcticFood(float radius)
{
	foodShape.setRadius(radius);
	foodShape.setPointCount(6);
	foodShape.setFillColor(sf::Color::Color(241,241,242,255));
}
void ArcticFood::setPosition(float x, float y)
{
	foodShape.setPosition(x, y);
}
sf::CircleShape ArcticFood::getFoodGraphic()
{
	return foodShape;
}
;
