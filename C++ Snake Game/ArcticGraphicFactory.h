#pragma once
#include "GraphicFactory.h"
#include "ArcticScreenTile.h"
#include "ArcticSnakeGraphicPart.h"
#include "ArcticFood.h"
#include <memory>


class ArcticGraphicFactory : public GraphicFactory
{

	public:
		virtual std::unique_ptr<ScreenTile> makeTile(float, float);
		virtual std::unique_ptr<FoodGraphic> makeFood(float);
		virtual std::unique_ptr<SnakeGraphicPart> makeSnakeGraphicPart(float);

};