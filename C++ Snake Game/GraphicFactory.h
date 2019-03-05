#pragma once
#include <memory>
#include "ScreenTile.h"
#include "FoodGraphic.h"
#include "SnakeGraphicPart.h"

class GraphicFactory
{
public:

	virtual std::unique_ptr<ScreenTile> makeTile(float, float) = 0;
	virtual std::unique_ptr<FoodGraphic> makeFood(float) = 0;
	virtual std::unique_ptr<SnakeGraphicPart> makeSnakeGraphicPart(float) = 0;


};