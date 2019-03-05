#pragma once
#include <SFML/Graphics.hpp>

class ScreenTile
{
protected:
	
	sf::RectangleShape tile;

public:

	ScreenTile(float, float);

	void setPosition(float, float);

	sf::RectangleShape  getTileShape();
};