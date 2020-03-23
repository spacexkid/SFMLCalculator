#pragma once
#include <SFML/Graphics.hpp>
#include "TextureLoader.h"
#include <iostream>
#include <stdexcept>

class OperationButton
{
public:
	enum Operation
	{
		ADD,
		SUBTRACT,
		MULTIPLY,
		DIVIDE,
	};

	OperationButton(int id, Operation mode, float x, float y, std::string location);
	void handleClick(sf::RenderWindow& mWindow, float& numa, float& numb, float& output, int id);
	void show(sf::RenderWindow& mWindow);

private:
	Operation modeid;
	TextureLoader textures;
	sf::Sprite sprite;
};