#pragma once
#include <SFML/Graphics.hpp>

class SnakePart
{
protected:
	
	sf::CircleShape circle;

public:

	SnakePart(float);

	void setPosition(float, float);

	sf::CircleShape getGraphicShape();

};