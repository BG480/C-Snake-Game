#pragma once
#include "GraphicFactory.h"
#include "TropicalScreenTile.h"
#include "TropicalSnakeGraphicPart.h"
#include "TropicalFood.h"
#include <memory>


class TropicalGraphicFactory : public GraphicFactory
{

public:
	virtual std::unique_ptr<ScreenTile> MakeTile(float, float);
	virtual std::unique_ptr<FoodGraphic> MakeFood(float);
	virtual std::unique_ptr<SnakeGraphicPart> MakeSnakeGraphicPart(float);

};