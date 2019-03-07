#include "ArcticScreenTile.h"

ArcticScreenTile::ArcticScreenTile(float width, float height) : ScreenTile(width, height)
{
	tile.setFillColor(sf::Color::Color(161,214,226,255));
	tile.setOutlineColor(sf::Color::Color(25,149,173,255));
}
