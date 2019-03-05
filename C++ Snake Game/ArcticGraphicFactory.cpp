#include "ArcticGraphicFactory.h"

std::unique_ptr<ScreenTile> ArcticGraphicFactory::makeTile(float width, float height)
{
	return std::make_unique<ArcticScreenTile>(width, height);
}

std::unique_ptr<FoodGraphic> ArcticGraphicFactory::makeFood(float radius)
{
	return std::make_unique<ArcticFood>(radius);
}

std::unique_ptr<SnakeGraphicPart> ArcticGraphicFactory::makeSnakeGraphicPart(float radius)
{
	return std::make_unique<ArcticSnakeGraphicPart>(radius);
}
