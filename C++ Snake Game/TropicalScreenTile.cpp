#include "TropicalScreenTile.h"

TropicalScreenTile::TropicalScreenTile(float width, float height) : ScreenTile(width, height)
{
	tile.setFillColor(sf::Color::Color(228,234,140,255));
	tile.setOutlineColor(sf::Color::Color(63,108,69,255));
}

