#include "TropicalTile.h"

TropicalTile::TropicalTile(float width, float height)
{
	tile.setSize(sf::Vector2f(width - 2, height - 2));
	tile.setOutlineThickness(1);
	tile.setFillColor(sf::Color::Color(228,234,140,255));
	tile.setOutlineColor(sf::Color::Color(63,108,69,255));
}

void TropicalTile::setPosition(float x, float y)
{
	tile.setPosition(x, y);
}

sf::RectangleShape TropicalTile::getTileShape()
{
	return tile;
}



