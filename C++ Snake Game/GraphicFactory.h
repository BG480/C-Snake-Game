#pragma once
#include <memory>
#include "Tile.h"
#include "Food.h"
#include "SnakePart.h"

class GraphicFactory
{
public:

	virtual std::unique_ptr<Tile> makeTile(float, float) = 0;
	virtual std::unique_ptr<Food> makeFood(float) = 0;
	virtual std::unique_ptr<SnakePart> makeSnakeGraphicPart(float) = 0;

};