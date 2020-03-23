#pragma once

#include <SFML/Graphics.hpp>
#include "TextureLoader.h"
#include <iostream>
#include "Output.h"

class EqualButton
{
public:
	EqualButton(int id, float x, float y, std::string location);

	void handleClick(sf::RenderWindow& mWindow, float& output);
	void show(sf::RenderWindow& mWindow);

private:
	TextureLoader textures;
	sf::Sprite sprite;
	Output outputtext{ 2.0f, 50.0f, "arial.ttf" };
};