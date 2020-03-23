#pragma once
#include <SFML/Graphics.hpp>
#include "TextureLoader.h"


class CEButton
{
public:
	CEButton(int id, float x, float y, std::string location);

	void handleClick(sf::RenderWindow& mWindow, float& output, bool& aused, bool& bused, float& a, float& b);
	void show(sf::RenderWindow& mWindow);

private:
	TextureLoader textures;
	sf::Sprite sprite;

};