#pragma once
#include <SFML/Graphics.hpp>

class Tile
{

public:
	
	virtual void setPosition(float, float) = 0;
	virtual sf::RectangleShape  getTileShape() = 0;
	
};