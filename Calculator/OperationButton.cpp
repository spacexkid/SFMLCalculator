#include "OperationButton.h"

OperationButton::OperationButton(int id, Operation mode, float x, float y, std::string location)
{
	textures.load(id, location);
	sprite.setTexture(textures.get(id));
	sprite.setPosition(x, y);
}

void OperationButton::handleClick(sf::RenderWindow& mWindow, float& numa, float& numb, float& output, int id)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			switch (id)
			{
			case 0:
				output = numa + numb;
				break;
			
			case 1:
				output = numa - numb;
				break;

			case 2:
				output = numa * numb;
				break;

			case 3:
				try
				{
					output = numa / numb;
					break;
				}
				catch (std::runtime_error& e)
				{
					std::cout << "error" << std::endl;
					e.what();
				}

			}
		}
	}
}

void OperationButton::show(sf::RenderWindow& mWindow)
{
	mWindow.draw(sprite);
}