#pragma once
#include <SFML/Graphics.hpp>

class SnakePart
{
public:

	virtual void setPosition(float, float) = 0;
	virtual sf::CircleShape getGraphicShape() = 0;

};