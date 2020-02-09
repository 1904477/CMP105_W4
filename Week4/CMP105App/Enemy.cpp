#include "Enemy.h"





void Enemy::setEnemySprite()
{
	texture.loadFromFile ("gfx/Goomba.png");

	setTexture(&texture);
	setSize(sf::Vector2f(150, 150));
	setPosition(900, 100);
}

void Enemy:: setBeachBallSprite()
{
	texture.loadFromFile("gfx/Beach_Ball.png");

	setTexture(&texture);
	setSize(sf::Vector2f(50, 50));
	setPosition(900, 400);
}

void Enemy::ballUpdate(float dt)
{
	move(-ballSpeed * dt, 0);


}
void Enemy::setInputBall(sf::RenderWindow& window)
{
	if (getPosition().x < 0)
	{
		ballSpeed = -ballSpeed;

	}
	if(getPosition().x>window.getSize().x-getSize().x)
	{
		ballSpeed = -ballSpeed;

	}

}
void Enemy::setInput(sf::RenderWindow& window)
{
	if (getPosition().x < 0)
	{
		enemySpeed = -enemySpeed;
	}
	if (getPosition().x > window.getSize().x - getSize().x)
	{
		enemySpeed = -enemySpeed;
	}
}


void Enemy::update(float dt)
{
	
	
	move(-enemySpeed * dt, 0);
	

}

