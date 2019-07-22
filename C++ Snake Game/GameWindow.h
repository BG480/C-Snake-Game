#pragma once
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "ArcticTile.h"
#include "GraphicFactory.h"
#include "ElementCoordinates.h"
#include <memory>
#include <vector>
#include <cstdlib>
#include "MoveDirection.h"

class GameWindow
{
	sf::RenderWindow window;
	int screenWidth;
	int screenHeight;
	int numberOfHorizontalTiles;
	int numberOfVerticalTiles;
	float widthOfTile;
	float heightOfTile;

public:

	GameWindow(int, int, int, int, float, float);

	int menu();

	void game(std::unique_ptr<GraphicFactory>);

	~GameWindow();

};