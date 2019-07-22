#pragma once
#include "SnakePart.h"

class ArcticSnakePart : public SnakePart
{
	sf::CircleShape circle;

public:

	ArcticSnakePart(float);
	void setPosition(float, float);
	sf::CircleShape getGraphicShape();

};