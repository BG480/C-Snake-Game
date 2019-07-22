#include "ArcticTile.h"

ArcticTile::ArcticTile(float width, float height)
{
	tile.setSize(sf::Vector2f(width - 2, height - 2));
	tile.setOutlineThickness(1);
	tile.setFillColor(sf::Color::Color(161,214,226,255));
	tile.setOutlineColor(sf::Color::Color(25,149,173,255));
}

void ArcticTile::setPosition(float x, float y)
{
	tile.setPosition(x, y);
}

sf::RectangleShape ArcticTile::getTileShape()
{
	return tile;
}
