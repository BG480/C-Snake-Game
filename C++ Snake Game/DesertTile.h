#pragma once

#include "Tile.h"

class DesertTile : public Tile
{
	sf::RectangleShape tile;
public:
	DesertTile(float, float);
	void setPosition(float, float);

	sf::RectangleShape  getTileShape();

};