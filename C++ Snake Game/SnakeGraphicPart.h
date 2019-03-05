#pragma once
#include <SFML/Graphics.hpp>

class SnakeGraphicPart
{
protected:
	
	sf::CircleShape circle;

public:

	SnakeGraphicPart(float);

	void setPosition(float, float);

	sf::CircleShape getGraphicShape();

};