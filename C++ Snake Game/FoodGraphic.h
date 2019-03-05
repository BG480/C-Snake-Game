#pragma once
#include <SFML/Graphics.hpp>

class FoodGraphic
{
protected:
	
	sf::CircleShape foodShape;

public:

	FoodGraphic(float);

	void setPosition(float, float);

	sf::CircleShape getGraphicShape();



};