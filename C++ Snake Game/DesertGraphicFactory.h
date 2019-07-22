#pragma once

#include "GraphicFactory.h"
#include "DesertTile.h"
#include "DesertSnakePart.h"
#include "DesertFood.h"
#include <memory>


class DesertGraphicFactory : public GraphicFactory
{

public:
	virtual std::unique_ptr<Tile> makeTile(float, float);
	virtual std::unique_ptr<Food> makeFood(float);
	virtual std::unique_ptr<SnakePart> makeSnakeGraphicPart(float);

};
