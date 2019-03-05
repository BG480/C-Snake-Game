#pragma once

#include "GraphicFactory.h"
#include "DesertScreenTile.h"
#include "DesertSnakeGraphicPart.h"
#include "DesertFood.h"
#include <memory>


class DesertGraphicFactory : public GraphicFactory
{

public:
	virtual std::unique_ptr<ScreenTile> makeTile(float, float);
	virtual std::unique_ptr<FoodGraphic> makeFood(float);
	virtual std::unique_ptr<SnakeGraphicPart> makeSnakeGraphicPart(float);

};
