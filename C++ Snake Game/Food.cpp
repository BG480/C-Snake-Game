#include "FoodGraphic.h"

FoodGraphic::FoodGraphic(float radius)
{
	foodShape.setRadius(radius);
	foodShape.setPointCount(6);
}

void FoodGraphic::setPosition(float x, float y)
{
	foodShape.setPosition(x, y);
}

sf::CircleShape FoodGraphic::getGraphicShape()
{
	return foodShape;
}
