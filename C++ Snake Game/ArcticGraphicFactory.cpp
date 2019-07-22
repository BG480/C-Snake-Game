#include "ArcticGraphicFactory.h"

std::unique_ptr<Tile> ArcticGraphicFactory::makeTile(float width, float height)
{
	return std::make_unique<ArcticTile>(width, height);
}

std::unique_ptr<Food> ArcticGraphicFactory::makeFood(float radius)
{
	return std::make_unique<ArcticFood>(radius);
}

std::unique_ptr<SnakePart> ArcticGraphicFactory::makeSnakeGraphicPart(float radius)
{
	return std::make_unique<ArcticSnakePart>(radius);
}
