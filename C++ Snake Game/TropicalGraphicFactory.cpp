#include "TropicalGraphicFactory.h"

std::unique_ptr<ScreenTile> TropicalGraphicFactory::MakeTile(float width, float height)
{
	return std::make_unique<TropicalScreenTile>(width, height);
}

std::unique_ptr<FoodGraphic> TropicalGraphicFactory::MakeFood(float radius)
{
	return std::make_unique<TropicalFood>(radius);
}

std::unique_ptr<SnakeGraphicPart> TropicalGraphicFactory::MakeSnakeGraphicPart(float radius)
{
	return std::make_unique<TropicalSnakeGraphicPart>(radius);
}
