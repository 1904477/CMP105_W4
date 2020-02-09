#pragma once
#
#include "Framework/Input.h"
#include "Framework/GameObject.h"


class Player:public GameObject
{
	
public:
	sf::Texture texture;
	sf::View view;

	float viewVelocity = 40.f;
	float Playerspeed = 100.f;


	void handleInput(float dt);
	void setSprite();

};

