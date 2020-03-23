#include "NumberButton.h"

NumberButton::NumberButton(Number number, float x, float y, std::string location) : id(number)
{
	textures.load(id, location);
	sprite.setTexture(textures.get(id));
	sprite.setPosition(x, y);
}

void NumberButton::handleClick(sf::RenderWindow& mWindow, float& numa, bool& aused, bool& bused, float& numb)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sprite.getGlobalBounds().contains(mWindow.mapPixelToCoords(sf::Mouse::getPosition(mWindow))))
		{
			if (aused == false)
			{
				switch (id)
				{
				case NUMBER1:
					numa = 1;
					aused = true;
					break;
				case NUMBER2:
					numa = 2;
					aused = true;
					break;
				case NUMBER3:
					numa = 3;
					aused = true;
					break;
				case NUMBER4:
					numa = 4;
					aused = true;
					break;
				case NUMBER5:
					numa = 5;
					aused = true;
					break;
				case NUMBER6:
					numa = 6;
					aused = true;
					break;
				case NUMBER7:
					numa = 7;
					aused = true;
					break;
				case NUMBER8:
					numa = 8;
					aused = true;
					break;
				case NUMBER9:
					numa = 9;
					aused = true;
					break;
				case NUMBER0:
					numa = 0;
					aused = true;
					break;
				}
			}
			else if (bused == true)
			{
				std::cout << "Clear the numbers!" << std::endl;
			}
			else
			{
				switch (id)
				{
				case NUMBER1:
					numb = 1;
					bused = true;
					break;
				case NUMBER2:
					numb = 2;
					bused = true;
					break;
				case NUMBER3:
					numb = 3;
					bused = true;
					break;
				case NUMBER4:
					numb = 4;
					bused = true;
					break;
				case NUMBER5:
					numb = 5;
					bused = true;
					break;
				case NUMBER6:
					numb = 6;
					bused = true;
					break;
				case NUMBER7:
					numb = 7;
					bused = true;
					break;
				case NUMBER8:
					numb = 8;
					bused = true;
					break;
				case NUMBER9:
					numb = 9;
					bused = true;
					break;
				case NUMBER0:
					numb = 0;
					bused = true;
					break;

				}
			}
		}
	}
}

void NumberButton::show(sf::RenderWindow& mWindow)
{
	mWindow.draw(sprite);
}

