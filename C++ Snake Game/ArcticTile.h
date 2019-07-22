#pragma once
#include "Tile.h"

class ArcticTile : public Tile
{
	sf::RectangleShape tile;
public:
	ArcticTile(float, float);
	void setPosition(float, float);
	sf::RectangleShape  getTileShape();

};
