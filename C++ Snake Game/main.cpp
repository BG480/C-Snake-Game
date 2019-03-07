#include <SFML/Graphics.hpp>
#include "GameWindow.h"
#include "GraphicFactory.h"
#include "ArcticGraphicFactory.h"
#include "DesertGraphicFactory.h"
#include "TropicalGraphicFactory.h"
#include <time.h>

int main()
{


	GameWindow window(1200, 800, 12, 8, 100.f, 100.f);
	std::unique_ptr<GraphicFactory> factoryPointer(new TropicalGraphicFactory);
	
	window.game(std::move(factoryPointer));
	return 0;
}