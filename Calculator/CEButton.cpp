#include "CEButton.h"

CEButton::CEButton(int id, float x, float y, std::string location)
{
	textures.load(id, location);
	sprite.setTexture(textures.get(id));
	sprite.setPosition(x, y);
}

void CEButton::handleClick(sf::RenderWindow& mWindow, float& output, bool& aused, bool& bused, float& a, float& b)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			output = 0;
			aused = false;
			bused = false;
			a = 0;
			b = 0;
		}
	}
}

void CEButton::show(sf::RenderWindow& mWindow)
{
	mWindow.draw(sprite);
}