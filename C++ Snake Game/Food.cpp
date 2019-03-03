#include "FoodGraphic.h"

FoodGraphic::FoodGraphic(float radius)
{
	food_shape.setRadius(radius);
	food_shape.setPointCount(6);
}

void FoodGraphic::SetPosition(float x, float y)
{
	food_shape.setPosition(x, y);
}

sf::CircleShape FoodGraphic::GetGraphicShape()
{
	return food_shape;
}
