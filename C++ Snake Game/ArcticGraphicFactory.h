#pragma once
#include "GraphicFactory.h"
#include "ArcticTile.h"
#include "ArcticSnakePart.h"
#include "ArcticFood.h"
#include <memory>


class ArcticGraphicFactory : public GraphicFactory
{

	public:
		virtual std::unique_ptr<Tile> makeTile(float, float);
		virtual std::unique_ptr<Food> makeFood(float);
		virtual std::unique_ptr<SnakePart> makeSnakeGraphicPart(float);

};