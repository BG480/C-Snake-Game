#include "TropicalScreenTile.h"

TropicalScreenTile::TropicalScreenTile(float width, float height) : ScreenTile(width, height)
{
	tile.setFillColor(sf::Color::Cyan);
	tile.setOutlineColor(sf::Color::Red);
}

