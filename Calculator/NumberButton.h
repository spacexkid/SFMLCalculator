#pragma once

#include <SFML/Graphics.hpp>
#include "TextureLoader.h"
#include <iostream>

class NumberButton
{
public:
	enum Number
	{
		NUMBER0,
		NUMBER1,
		NUMBER2,
		NUMBER3,
		NUMBER4,
		NUMBER5,
		NUMBER6,
		NUMBER7,
		NUMBER8,
		NUMBER9
	};

	NumberButton(Number number, float x, float y, std::string location);
	void handleClick(sf::RenderWindow& mWindow, float& numa, bool& aused, bool& bused, float& numb);
	void show(sf::RenderWindow& mWindow);


private:
	Number id;
	int numid = static_cast<int>(id);
	TextureLoader textures;
	sf::Sprite sprite;
	
};