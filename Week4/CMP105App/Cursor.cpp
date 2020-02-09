#include "Cursor.h"
void Cursor::newCursorSprite()
{
	texture.loadFromFile("gfx/icon.png");

	setTexture(&texture);
	setSize(sf::Vector2f(50,50));
	
}
void Cursor::update()
{
	setPosition(input->getMouseX(), input->getMouseY());
	




}