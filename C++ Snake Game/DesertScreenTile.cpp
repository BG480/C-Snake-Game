#include "DesertScreenTile.h"

DesertScreenTile::DesertScreenTile(float width, float height) : ScreenTile(width, height)
{
	tile.setFillColor(sf::Color::Cyan);
	tile.setOutlineColor(sf::Color::Red);
}
