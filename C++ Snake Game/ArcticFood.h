#pragma once
#include "Food.h"

class ArcticFood : public Food
{
	sf::CircleShape foodShape;
public:
	ArcticFood(float);
	void setPosition(float, float);
	sf::CircleShape getFoodGraphic();

};