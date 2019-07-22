#pragma once
#include "SnakePart.h"

class TropicalSnakePart : public SnakePart
{
	sf::CircleShape circle;

public:

	TropicalSnakePart(float);
	void setPosition(float, float);
	sf::CircleShape getGraphicShape();

};