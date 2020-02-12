#include "Background.h"
void Background::setBackground()
{
	
	
	texture.loadFromFile("gfx/Level1_1.png");
	setTexture(&texture);
	setSize(sf::Vector2f(11038,675));
}




void Background::moving(sf::RenderWindow& window, float dt, sf::View& view)
{
	window.getView();


	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(3000.f * dt, 0);
		if (getPosition().x > 0)
		{
			float x = 0;
			setPosition(x, getPosition().y);

		}
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(-3000.f * dt, 0);
		if (getPosition().x+getSize().x<window.getSize().x)
		{
			
			float x = window.getSize().x-getSize().x;
			
			setPosition(x, getPosition().y);
		}
	}
}
