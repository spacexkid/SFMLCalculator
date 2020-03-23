#include "EqualButton.h"

EqualButton::EqualButton(int id, float x, float y, std::string location)
{
	textures.load(id, location);
	sprite.setTexture(textures.get(id));
	sprite.setPosition(x, y);
}

void EqualButton::handleClick(sf::RenderWindow& mWindow, float& output)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			std::cout << output << std::endl;
			outputtext.setOutput(output);
			
		}

	}

}

void EqualButton::show(sf::RenderWindow& mWindow)
{
	mWindow.draw(sprite);
	outputtext.show(mWindow);
}