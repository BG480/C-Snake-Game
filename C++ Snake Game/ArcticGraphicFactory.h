#pragma once
#include "GraphicFactory.h"
#include "ArcticScreenTile.h"
#include "ArcticSnakeGraphicPart.h"
#include "ArcticFood.h"
#include <memory>


class ArcticGraphicFactory : public GraphicFactory
{

	public:
		virtual std::unique_ptr<ScreenTile> MakeTile(float, float);
		virtual std::unique_ptr<FoodGraphic> MakeFood(float);
		virtual std::unique_ptr<SnakeGraphicPart> MakeSnakeGraphicPart(float);

};