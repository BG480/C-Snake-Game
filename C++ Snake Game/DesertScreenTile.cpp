#include "DesertScreenTile.h"

DesertScreenTile::DesertScreenTile(float width, float height) : ScreenTile(width, height)
{
	tile.setFillColor(sf::Color::Color(186,85,54,255));
	tile.setOutlineColor(sf::Color::Color(164,56,32,255));
}
