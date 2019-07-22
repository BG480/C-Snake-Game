#include "DesertFood.h"

DesertFood::DesertFood(float radius)
{
	foodShape.setRadius(radius);
	foodShape.setPointCount(6);
	foodShape.setFillColor(sf::Color::Color(70,33,26,255));
}
void DesertFood::setPosition(float x, float y)
{
	foodShape.setPosition(x, y);
}
sf::CircleShape DesertFood::getFoodGraphic()
{
	return foodShape;
}
;
