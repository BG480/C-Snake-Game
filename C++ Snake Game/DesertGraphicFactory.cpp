#include "DesertGraphicFactory.h"

std::unique_ptr<ScreenTile> DesertGraphicFactory::MakeTile(float width, float height)
{
	return std::make_unique<DesertScreenTile>(width, height);
}

std::unique_ptr<FoodGraphic> DesertGraphicFactory::MakeFood(float radius)
{
	return std::make_unique<DesertFood>(radius);
}

std::unique_ptr<SnakeGraphicPart> DesertGraphicFactory::MakeSnakeGraphicPart(float radius)
{
	return std::make_unique<DesertSnakeGraphicPart>(radius);
}
