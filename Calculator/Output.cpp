#include "Output.h"

Output::Output(float x, float y, std::string location)
{
	fonts.load(0, location);
	text.setFont(fonts.get(0));
	text.setPosition(x, y);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::White);
}

void Output::show(sf::RenderWindow& mWindow)
{
	mWindow.draw(text);
}

void Output::setOutput(float& output)
{
	text.setString(std::to_string(output));
}