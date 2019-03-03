#include "ScreenTile.h"

ScreenTile::ScreenTile(float width, float height)
{
	tile.setSize(sf::Vector2f(width - 2, height - 2));
	tile.setOutlineThickness(1);
}

void ScreenTile::SetPosition(float x, float y)
{
	tile.setPosition(x, y);
}

sf::RectangleShape  ScreenTile::GetTileShape()
{
	return tile;
}
