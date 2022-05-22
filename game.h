#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include "player.h"
#include "platform.h"
#include "splash.h"
#include "text.h"

class Game {
public:
	enum class GameState { INTRO, PLAY, GAME_OVER };
	Game();
	void play();

private:
	sf::RenderWindow window;
	GameState game_state = GameState::PLAY;
	Player player;
	//Platform p1;
	std::list<Platform*> platform_sprites;
	SplashScreen game_over_screen;
	TextObject score_text;
	size_t score = 0;

	void check_events();
	void update();
	void draw();
	void check_collisions();

};