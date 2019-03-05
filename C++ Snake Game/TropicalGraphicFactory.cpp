#include "TropicalGraphicFactory.h"

std::unique_ptr<ScreenTile> TropicalGraphicFactory::makeTile(float width, float height)
{
	return std::make_unique<TropicalScreenTile>(width, height);
}

std::unique_ptr<FoodGraphic> TropicalGraphicFactory::makeFood(float radius)
{
	return std::make_unique<TropicalFood>(radius);
}

std::unique_ptr<SnakeGraphicPart> TropicalGraphicFactory::makeSnakeGraphicPart(float radius)
{
	return std::make_unique<TropicalSnakeGraphicPart>(radius);
}
