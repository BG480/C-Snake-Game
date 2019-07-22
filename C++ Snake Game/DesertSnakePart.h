#pragma once

#include "SnakePart.h"

class DesertSnakePart : public SnakePart
{
	sf::CircleShape circle;

public:

	DesertSnakePart(float);
	void setPosition(float, float);
	sf::CircleShape getGraphicShape();

};
