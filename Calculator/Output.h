#pragma once

#include <SFML/Graphics.hpp>
#include "FontLoader.h"

class Output
{
public:
	Output(float x, float y, std::string location);
	void show(sf::RenderWindow& mWindow);
	void setOutput(float& output);

private:
	FontLoader fonts;
	sf::Text text;
};