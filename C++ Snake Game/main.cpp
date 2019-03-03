#include <SFML/Graphics.hpp>
#include "App.h"
#include "GraphicFactory.h"
#include "ArcticGraphicFactory.h"
#include <time.h>

int main()
{


	App a(1000, 1000);
	std::unique_ptr<GraphicFactory> wsk(new ArcticGraphicFactory);
	a.game(std::move(wsk), 10, 10, 100.f, 100.f);

	return 0;
}