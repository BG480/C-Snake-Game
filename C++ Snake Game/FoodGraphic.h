#pragma once
#include <SFML/Graphics.hpp>

class FoodGraphic
{
protected:
	
	sf::CircleShape food_shape;

public:

	FoodGraphic(float);

	void SetPosition(float, float);

	sf::CircleShape GetGraphicShape();



};