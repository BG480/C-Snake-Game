#pragma once

#include "Food.h"

class TropicalFood : public Food
{
	sf::CircleShape foodShape;
public:
	TropicalFood(float);
	virtual void setPosition(float, float);
	sf::CircleShape getFoodGraphic();

};