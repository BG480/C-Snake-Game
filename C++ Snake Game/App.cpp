#include "App.h"


App::App(int screen_width, int screen_height)
{
	appWindow.create(sf::VideoMode(screen_width, screen_height), "Projekt PK", sf::Style::Default);
}

int App::layout_menu()
{
	bool layout_menu = true;

	sf::Text title; // naglowek menu
	title.setString("Space Shooter");
	title.setCharacterSize(60);
	title.setFillColor(sf::Color::White);
	title.setPosition(appWindow.getSize().x / 2.f - title.getGlobalBounds().width / 2.f, 100.f);

	sf::Text layout_options[3]; // tablica przechowujaca opcje menu

	
	layout_options[0].setString("Graj");
	layout_options[0].setCharacterSize(40);
	layout_options[0].setFillColor(sf::Color::Yellow);
	layout_options[0].setPosition(appWindow.getSize().x / 2.f - layout_options[0].getGlobalBounds().width / 2.f, 300.f);



	layout_options[1].setString("Graj");
	layout_options[1].setCharacterSize(40);
	layout_options[1].setFillColor(sf::Color::Yellow);
	layout_options[1].setPosition(appWindow.getSize().x / 2.f - layout_options[0].getGlobalBounds().width / 2.f, 300.f);


	layout_options[1].setString("Graj");
	layout_options[1].setCharacterSize(40);
	layout_options[1].setFillColor(sf::Color::Yellow);
	layout_options[1].setPosition(appWindow.getSize().x / 2.f - layout_options[0].getGlobalBounds().width / 2.f, 300.f);

	while (layout_menu)
	{


	}

	return 1;


}






void App::game(std::unique_ptr<GraphicFactory> factory, int number_of_tiles_horizontal, int number_of_tiles_vertical, float width_of_tile, float height_of_tile)
{
	srand(time(NULL));
	bool game = true;
	//std::unique_ptr<ScreenTile> wsk(new ArcticScreenTile(10.f, 10.f));
	//std::unique
	auto tile_graphic = factory->MakeTile(width_of_tile, height_of_tile);
	auto snake_graphic_part = factory->MakeSnakeGraphicPart(width_of_tile / 2);
	auto food_graphic = factory->MakeFood(width_of_tile / 2);
	float movement_delay = 0.7;
	MoveDirection direction = UP;

	std::vector<ElementCoordinates> snake_coords;
	snake_coords.push_back(ElementCoordinates(4, 4));

	ElementCoordinates food_cords((std::rand() % number_of_tiles_horizontal) + 0, (std::rand() % number_of_tiles_vertical) + 0);
	
	sf::Clock movement_clock;
	movement_clock.restart();
	sf::Time movement_time;

	while (game)
	{
		sf::Event event;

		while (appWindow.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) 
			{
				game = false;
			}
		}

		//================================================ KEYBOARD HANDLE

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) direction = LEFT;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))  direction = RIGHT;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) direction = UP;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) direction = DOWN;

		//==========================================================================

		//================================================= MOVEMENT AND OTHER SNAKE STUFF

		movement_time = movement_clock.getElapsedTime();

		if (movement_time.asSeconds() > movement_delay)
		{
			// VARIABLES THAT HOLD POSIOTION OF THE LAST PART OF THE SNAKe
			int x_tmp = snake_coords[snake_coords.size() - 1].GetX();
			int y_tmp = snake_coords[snake_coords.size() - 1].GetY();


			if (snake_coords.size() > 1) // LOOP THAT MOVES WHOLE SNAKE
			{
				for (int i = snake_coords.size() - 1; i > 0; --i)
				{
					snake_coords[i].SetX(snake_coords[i - 1].GetX());
					snake_coords[i].SetY(snake_coords[i - 1].GetY());
				}
			}

			switch (direction) //MOVEMENT SWITCH - It moves only head of snake (head = first element inside vector)
			{
				case LEFT:
				{
					snake_coords[0].SetX(snake_coords[0].GetX() - 1);
					break;
				}
				case UP:
				{
					snake_coords[0].SetY(snake_coords[0].GetY() - 1);
					break;
				}
				case RIGHT:
				{
					snake_coords[0].SetX(snake_coords[0].GetX() + 1);
					break;
				}
				case DOWN:
				{
					snake_coords[0].SetY(snake_coords[0].GetY() + 1);
					break;
				}

			}



			if (snake_coords[0].GetX() == food_cords.GetX() && snake_coords[0].GetY() == food_cords.GetY()) // WHEN THE HEAD OF THE SNAKE REACHED FOOD
			{
				snake_coords.push_back(ElementCoordinates(x_tmp, y_tmp));
				food_cords.SetX((std::rand() % number_of_tiles_horizontal) + 0);
				food_cords.SetY((std::rand() % number_of_tiles_vertical) + 0);
			}

			//IF HEAD OF THE SNAKE MOVES OUT OF THE SCREEN
			if (snake_coords[0].GetX() > number_of_tiles_horizontal) snake_coords[0].SetX(0);
			if (snake_coords[0].GetX() < 0) snake_coords[0].SetX(number_of_tiles_horizontal);
			if (snake_coords[0].GetY() > number_of_tiles_vertical) snake_coords[0].SetY(0);
			if (snake_coords[0].GetY() < 0) snake_coords[0].SetY(number_of_tiles_vertical);


			for (int i = 1; i < snake_coords.size(); i++) // CHECK IF HEAD COLLIDES WITH OTHER PART - IF COLLIDES, GAME OVER
			{
				if (snake_coords[0].GetX() == snake_coords[i].GetX() && snake_coords[0].GetY() == snake_coords[i].GetY())
				{
					game = false;
				}
			}



			movement_clock.restart();
		}



		//==========================================================================

		appWindow.clear();

		for (int i = 0; i < number_of_tiles_horizontal; i++)
		{
			for (int j = 0; j < number_of_tiles_vertical; j++)
			{
				tile_graphic->SetPosition(i*width_of_tile, j*height_of_tile);
				appWindow.draw(tile_graphic->GetTileShape());
			}
		}

		for (int i = 0; i < snake_coords.size(); i++)
		{
			snake_graphic_part->SetPosition(snake_coords[i].GetX() * width_of_tile, snake_coords[i].GetY() * width_of_tile);
			appWindow.draw(snake_graphic_part->GetGraphicShape());
		}

		food_graphic->SetPosition(food_cords.GetX()*width_of_tile, food_cords.GetY()*height_of_tile);
		appWindow.draw(food_graphic->GetGraphicShape());


		appWindow.display();

	}



}

App::~App()
{
	appWindow.close();
}
