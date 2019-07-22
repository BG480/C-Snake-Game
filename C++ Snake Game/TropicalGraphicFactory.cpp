#include "TropicalGraphicFactory.h"

std::unique_ptr<Tile> TropicalGraphicFactory::makeTile(float width, float height)
{
	return std::make_unique<TropicalTile>(width, height);
}

std::unique_ptr<Food> TropicalGraphicFactory::makeFood(float radius)
{
	return std::make_unique<TropicalFood>(radius);
}

std::unique_ptr<SnakePart> TropicalGraphicFactory::makeSnakeGraphicPart(float radius)
{
	return std::make_unique<TropicalSnakePart>(radius);
}
