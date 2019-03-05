#pragma once
#include "GraphicFactory.h"
#include "TropicalScreenTile.h"
#include "TropicalSnakeGraphicPart.h"
#include "TropicalFood.h"
#include <memory>


class TropicalGraphicFactory : public GraphicFactory
{

public:
	virtual std::unique_ptr<ScreenTile> makeTile(float, float);
	virtual std::unique_ptr<FoodGraphic> makeFood(float);
	virtual std::unique_ptr<SnakeGraphicPart> makeSnakeGraphicPart(float);

};