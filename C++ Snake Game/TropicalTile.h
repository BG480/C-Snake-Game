#pragma once

#include "Tile.h"

class TropicalTile : public Tile
{
	sf::RectangleShape tile;
public:
	TropicalTile(float, float);
	void setPosition(float, float);
	sf::RectangleShape  getTileShape();

};
