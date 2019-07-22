#include <SFML/Graphics.hpp>
#include "GameWindow.h"
#include "GraphicFactory.h"
#include "ArcticGraphicFactory.h"
#include "DesertGraphicFactory.h"
#include "TropicalGraphicFactory.h"
#include <time.h>

int main()
{
	srand(time(NULL));
	int graphicOption = std::rand() % 3;
	std::unique_ptr<GraphicFactory> graphicFactory;

	switch (graphicOption)
	{
		case 0:
			graphicFactory = std::make_unique<ArcticGraphicFactory>();
			break;
		case 1:
			graphicFactory = std::make_unique<DesertGraphicFactory>();
			break;
		case 2:
			graphicFactory = std::make_unique<TropicalGraphicFactory>();
			break;
	}
		
	GameWindow window(1200, 800, 12, 8, 100.f, 100.f);
	window.game(std::move(graphicFactory));
	return 0;
}