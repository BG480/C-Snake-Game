#pragma once
#include <memory>
#include "ScreenTile.h"
#include "FoodGraphic.h"
#include "SnakeGraphicPart.h"

class GraphicFactory
{
public:

	virtual std::unique_ptr<ScreenTile> MakeTile(float, float) = 0;
	virtual std::unique_ptr<FoodGraphic> MakeFood(float) = 0;
	virtual std::unique_ptr<SnakeGraphicPart> MakeSnakeGraphicPart(float) = 0;


};