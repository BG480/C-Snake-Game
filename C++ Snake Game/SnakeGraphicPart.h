#pragma once
#include <SFML/Graphics.hpp>

class SnakeGraphicPart
{
protected:
	
	sf::CircleShape circle;

public:

	SnakeGraphicPart(float);

	void SetPosition(float, float);

	sf::CircleShape GetGraphicShape();

};