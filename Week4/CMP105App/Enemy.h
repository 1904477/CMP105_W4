#pragma once
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>
#include <iostream>
class Enemy:public GameObject
{
public:



	sf::Texture texture;


	
	
	float ballSpeed = 400.f;
	float enemySpeed = 1000.f;
	
	void update(float dt);
	void setInput(sf::RenderWindow& window);
	void setEnemySprite();
	void setBeachBallSprite();
	void setInputBall(sf::RenderWindow& window);
	void ballUpdate(float);

};

