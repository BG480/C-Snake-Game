#include "DesertTile.h"

DesertTile::DesertTile(float width, float height)
{
	tile.setSize(sf::Vector2f(width - 2, height - 2));
	tile.setOutlineThickness(1);
	tile.setFillColor(sf::Color::Color(186,85,54,255));
	tile.setOutlineColor(sf::Color::Color(164,56,32,255));
}

void DesertTile::setPosition(float x, float y)
{
	tile.setPosition(x, y);
}

sf::RectangleShape DesertTile::getTileShape()
{
	return tile;
}
