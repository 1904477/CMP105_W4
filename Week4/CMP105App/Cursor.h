#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
class Cursor:public GameObject
{
public:
	sf::Texture texture;


	void newCursorSprite();
	void setNewCursor();
	void update();


};

