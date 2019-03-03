#pragma once
#include <SFML/Graphics.hpp>

class ScreenTile
{
protected:
	
	sf::RectangleShape tile;

public:

	ScreenTile(float, float);

	void SetPosition(float, float);

	sf::RectangleShape  GetTileShape();
};