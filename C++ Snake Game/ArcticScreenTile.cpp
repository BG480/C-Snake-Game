#include "ArcticScreenTile.h"

ArcticScreenTile::ArcticScreenTile(float width, float height) : ScreenTile(width, height)
{
	tile.setFillColor(sf::Color::Cyan);
	tile.setOutlineColor(sf::Color::Red);
}
