#pragma once
#include "GraphicFactory.h"
#include "TropicalTile.h"
#include "TropicalSnakePart.h"
#include "TropicalFood.h"
#include <memory>


class TropicalGraphicFactory : public GraphicFactory
{

public:
	virtual std::unique_ptr<Tile> makeTile(float, float);
	virtual std::unique_ptr<Food> makeFood(float);
	virtual std::unique_ptr<SnakePart> makeSnakeGraphicPart(float);

};