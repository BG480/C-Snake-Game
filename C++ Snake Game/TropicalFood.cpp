#include "TropicalFood.h"

TropicalFood::TropicalFood(float radius)
{
	foodShape.setRadius(radius);
	foodShape.setPointCount(6);
	foodShape.setFillColor(sf::Color::Color(203,0,0,255));
}

void TropicalFood::setPosition(float x, float y)
{
	foodShape.setPosition(x, y);
}

sf::CircleShape TropicalFood::getFoodGraphic()
{
	return foodShape;
}



