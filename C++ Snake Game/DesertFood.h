#pragma once

#include "Food.h"

class DesertFood : public Food
{
	sf::CircleShape foodShape;
public:
	DesertFood(float);
	virtual void setPosition(float, float);
	sf::CircleShape getFoodGraphic();

};

