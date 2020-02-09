#include "Level.h"
Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	window->setMouseCursorVisible(false);
	// initialise game objects
	Player1.setSprite();
	Player1.setInput(input);
	Goomba.setEnemySprite();
	Goomba.setInput(*window);
	BeachBall.setBeachBallSprite();
	cursor.newCursorSprite();
	cursor.setInput(input);
	background.setBackground();
	background.setInput(input);
}

Level::~Level()
{

}




// handle user input
void Level::handleInput(float dt)
{
	
	
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	Player1.handleInput(dt);
	Goomba.setInput(*window);
	BeachBall.setInputBall(*window);
	cursor.update();
}



// Update game objects
void Level::update(float dt)
{
	
	Goomba.update(dt);
	BeachBall.ballUpdate(dt);
	background.moving(*window,dt,view);



}

// Render level
void Level::render()
{
	
	beginDraw();
	window->draw(background);
	window->draw(Player1);
	window->draw(Goomba);
	window->draw(BeachBall);
	window->draw(cursor);
	
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}