#include "GameWindow.h"


GameWindow::GameWindow(int width, int height, int horizontalTiles, int verticalTiles, float tileWidth, float tileHeight)
{
	screenWidth = width;
	screenHeight = height;
	numberOfHorizontalTiles = horizontalTiles;
	numberOfVerticalTiles = verticalTiles;
	widthOfTile = tileWidth;
	heightOfTile = tileHeight;
	window.create(sf::VideoMode(screenWidth, screenHeight), "C++ Snake Game", sf::Style::Default);
	
}

int GameWindow::menu()
{
	bool menu = true;

	sf::Text menuHeaderText; // naglowek menu
	menuHeaderText.setString("SNAKE");
	menuHeaderText.setCharacterSize(60);
	menuHeaderText.setFillColor(sf::Color::White);
	menuHeaderText.setPosition(window.getSize().x / 2.f - menuHeaderText.getGlobalBounds().width / 2.f, 100.f);

	sf::Text menuOptionsText[3]; // tablica przechowujaca opcje menu

	
	menuOptionsText[0].setString("Graj");
	menuOptionsText[0].setCharacterSize(40);
	menuOptionsText[0].setFillColor(sf::Color::Yellow);
	menuOptionsText[0].setPosition(window.getSize().x / 2.f - menuOptionsText[0].getGlobalBounds().width / 2.f, 300.f);



	menuOptionsText[1].setString("Graj");
	menuOptionsText[1].setCharacterSize(40);
	menuOptionsText[1].setFillColor(sf::Color::Yellow);
	menuOptionsText[1].setPosition(window.getSize().x / 2.f - menuOptionsText[0].getGlobalBounds().width / 2.f, 300.f);


	menuOptionsText[1].setString("Graj");
	menuOptionsText[1].setCharacterSize(40);
	menuOptionsText[1].setFillColor(sf::Color::Yellow);
	menuOptionsText[1].setPosition(window.getSize().x / 2.f - menuOptionsText[0].getGlobalBounds().width / 2.f, 300.f);

	while (menu)
	{


	}

	return 1;


}

void GameWindow::game(std::unique_ptr<GraphicFactory> factoryPointer)
{
	srand(time(NULL));
	bool game = true;
	auto tileGraphic = factoryPointer->makeTile(widthOfTile, heightOfTile);
	auto snakePartGraphic = factoryPointer->makeSnakeGraphicPart(widthOfTile / 2);
	auto foodGraphic = factoryPointer->makeFood(widthOfTile / 4);
	float movementDelay = 0.65;
	MoveDirection moveDirection = UP;

	std::vector<ElementCoordinates> snakePartsCoordinates;
	snakePartsCoordinates.push_back(ElementCoordinates(4, 4));

	ElementCoordinates foodCoordinates((std::rand() % numberOfHorizontalTiles) + 0, (std::rand() % numberOfVerticalTiles) + 0);
	
	sf::Clock movementClock; // clock used to measure movementDelay
	movementClock.restart(); 
	sf::Time movementTime; // variable used to store time returned by movementClock

	while (game)
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) 
			{
				game = false;
			}
		}

		//================================================ KEYBOARD HANDLING

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) moveDirection = LEFT;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))  moveDirection = RIGHT;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) moveDirection = UP;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) moveDirection = DOWN;

		//================================================= MOVEMENT AND OTHER SNAKE STUFF

		movementTime = movementClock.getElapsedTime();

		if (movementTime.asSeconds() > movementDelay)
		{
			// VARIABLES THAT HOLD POSIOTION OF THE LAST PART OF THE SNAKE
			int x = snakePartsCoordinates[snakePartsCoordinates.size() - 1].getX();
			int y = snakePartsCoordinates[snakePartsCoordinates.size() - 1].getY();


			if (snakePartsCoordinates.size() > 1) // LOOP THAT MOVES WHOLE SNAKE
			{
				for (int i = snakePartsCoordinates.size() - 1; i > 0; --i)
				{
					snakePartsCoordinates[i].setX(snakePartsCoordinates[i - 1].getX());
					snakePartsCoordinates[i].setY(snakePartsCoordinates[i - 1].getY());
				}
			}

			switch (moveDirection) //MOVEMENT SWITCH - It moves only head of snake (head = first element inside vector)
			{
				case LEFT:
				{
					snakePartsCoordinates[0].setX(snakePartsCoordinates[0].getX() - 1);
					break;
				}
				case UP:
				{
					snakePartsCoordinates[0].setY(snakePartsCoordinates[0].getY() - 1);
					break;
				}
				case RIGHT:
				{
					snakePartsCoordinates[0].setX(snakePartsCoordinates[0].getX() + 1);
					break;
				}
				case DOWN:
				{
					snakePartsCoordinates[0].setY(snakePartsCoordinates[0].getY() + 1);
					break;
				}

			}



			if (snakePartsCoordinates[0].getX() == foodCoordinates.getX() && snakePartsCoordinates[0].getY() == foodCoordinates.getY()) // WHEN THE HEAD OF THE SNAKE REACHED FOOD
			{
				snakePartsCoordinates.push_back(ElementCoordinates(x, y));
				foodCoordinates.setX((std::rand() % numberOfHorizontalTiles) + 0);
				foodCoordinates.setY((std::rand() % numberOfVerticalTiles) + 0);
			}

			//IF HEAD OF THE SNAKE MOVES OUT OF THE SCREEN
			if (snakePartsCoordinates[0].getX() > numberOfHorizontalTiles) snakePartsCoordinates[0].setX(0);
			if (snakePartsCoordinates[0].getX() < 0) snakePartsCoordinates[0].setX(numberOfHorizontalTiles);
			if (snakePartsCoordinates[0].getY() > numberOfVerticalTiles) snakePartsCoordinates[0].setY(0);
			if (snakePartsCoordinates[0].getY() < 0) snakePartsCoordinates[0].setY(numberOfVerticalTiles);


			for (int i = 1; i < snakePartsCoordinates.size(); i++) // CHECK IF HEAD COLLIDES WITH OTHER PART - IF COLLIDES, GAME OVER
			{
				if (snakePartsCoordinates[0].getX() == snakePartsCoordinates[i].getX() && snakePartsCoordinates[0].getY() == snakePartsCoordinates[i].getY())
				{
					game = false;
				}
			}



			movementClock.restart();
		}
			   		 		
		//================================================ DRAWING ELEMENTS ON SCREEN

		window.clear();

		for (int i = 0; i < numberOfHorizontalTiles; i++)
		{
			for (int j = 0; j < numberOfVerticalTiles; j++)
			{
				tileGraphic->setPosition(i*widthOfTile, j*heightOfTile);
				window.draw(tileGraphic->getTileShape());
			}
		}

		for (int i = 0; i < snakePartsCoordinates.size(); i++)
		{
			snakePartGraphic->setPosition(snakePartsCoordinates[i].getX() * widthOfTile, snakePartsCoordinates[i].getY() * widthOfTile);
			window.draw(snakePartGraphic->getGraphicShape());
		}

		foodGraphic->setPosition((foodCoordinates.getX()*widthOfTile) + widthOfTile / 4, (foodCoordinates.getY()*heightOfTile) + heightOfTile / 4);
		window.draw(foodGraphic->getGraphicShape());


		window.display();

	}



}

GameWindow::~GameWindow()
{
	window.close();
}
