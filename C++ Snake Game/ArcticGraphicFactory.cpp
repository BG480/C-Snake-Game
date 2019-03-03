#include "ArcticGraphicFactory.h"

std::unique_ptr<ScreenTile> ArcticGraphicFactory::MakeTile(float width, float height)
{
	return std::make_unique<ArcticScreenTile>(width, height);
}

std::unique_ptr<FoodGraphic> ArcticGraphicFactory::MakeFood(float radius)
{
	return std::make_unique<ArcticFood>(radius);
}

std::unique_ptr<SnakeGraphicPart> ArcticGraphicFactory::MakeSnakeGraphicPart(float radius)
{
	return std::make_unique<ArcticSnakeGraphicPart>(radius);
}
