#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <iostream>

class Background:public GameObject
{
public:
	sf::Texture texture;
	
	
	void moving(sf::RenderWindow& window, float dt, sf::View &view);

	void setBackground();
	

};

