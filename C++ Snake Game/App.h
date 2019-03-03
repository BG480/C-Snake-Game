#pragma once
#include <SFML/Graphics.hpp>
#include "ScreenTile.h"
#include "ArcticScreenTile.h"
#include "GraphicFactory.h"
#include "ElementCoordinates.h"
#include <memory>
#include <vector>
#include <cstdlib>
#include "MoveDirection.h"

class App
{
	sf::RenderWindow appWindow;
	int numberOfHorizontalBlocks;
	int numberOfVerticalBlocks;
	float widthOfBlock;
	float heightOfBlock;

public:

	App(int, int);

	int layout_menu();

	void game(std::unique_ptr<GraphicFactory>, int, int, float, float);

	void score_menu(int player_score, int max_points);

	~App();

};