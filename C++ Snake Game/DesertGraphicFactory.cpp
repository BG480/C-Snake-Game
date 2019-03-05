#include "DesertGraphicFactory.h"

std::unique_ptr<ScreenTile> DesertGraphicFactory::makeTile(float width, float height)
{
	return std::make_unique<DesertScreenTile>(width, height);
}

std::unique_ptr<FoodGraphic> DesertGraphicFactory::makeFood(float radius)
{
	return std::make_unique<DesertFood>(radius);
}

std::unique_ptr<SnakeGraphicPart> DesertGraphicFactory::makeSnakeGraphicPart(float radius)
{
	return std::make_unique<DesertSnakeGraphicPart>(radius);
}
