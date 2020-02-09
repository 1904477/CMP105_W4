#include <string.h>
#include <iostream>
#include "Player.h"


void Player:: setSprite()
{
	texture.loadFromFile("gfx/Mushroom.png");

	setTexture(&texture);
	setSize(sf::Vector2f(100, 100));
	setPosition(0, 200);
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W))
	{
		
		move(0, -Playerspeed*dt);
		

	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		
		move(0, dt*Playerspeed);

	}
	
	if (input->isKeyDown(sf::Keyboard::A))
	{
		
		move(-Playerspeed*dt, 0);
	
	}

	if (input->isKeyDown(sf::Keyboard::D))
	{
		
		move(Playerspeed*dt, 0);
	
	}


}
