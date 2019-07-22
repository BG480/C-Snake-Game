#include "DesertGraphicFactory.h"

std::unique_ptr<Tile> DesertGraphicFactory::makeTile(float width, float height)
{
	return std::make_unique<DesertTile>(width, height);
}

std::unique_ptr<Food> DesertGraphicFactory::makeFood(float radius)
{
	return std::make_unique<DesertFood>(radius);
}

std::unique_ptr<SnakePart> DesertGraphicFactory::makeSnakeGraphicPart(float radius)
{
	return std::make_unique<DesertSnakePart>(radius);
}
