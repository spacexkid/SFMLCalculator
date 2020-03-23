#include "App.h"

App::App() : mWindow(sf::VideoMode(400, 500), "Calculator"), output(0), a(0), b(0)
{
	//Left empty as everything's initialized up top
}

//Events and rendering
void App::run()
{
	while (mWindow.isOpen())
	{
		processEvents();
		render();
	}
}

//Event processing
void App::processEvents()
{
	sf::Event event;
	while(mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			handleInput(event.key.code, true);
			break;

		case sf::Event::Closed:
			mWindow.close();
			break;

		case sf::Event::MouseButtonPressed:
			button1.handleClick(mWindow, a, aused, bused, b);
			button2.handleClick(mWindow, a, aused, bused, b);
			button3.handleClick(mWindow, a, aused, bused, b);
			button4.handleClick(mWindow, a, aused, bused, b);
			button5.handleClick(mWindow, a, aused, bused, b);
			button6.handleClick(mWindow, a, aused, bused, b);
			button7.handleClick(mWindow, a, aused, bused, b);
			button8.handleClick(mWindow, a, aused, bused, b);
			button9.handleClick(mWindow, a, aused, bused, b);
			button0.handleClick(mWindow, a, aused, bused, b);
			addbutton.handleClick(mWindow, a, b, output, 0);
			subtractbutton.handleClick(mWindow, a, b, output, 1);
			multiplybutton.handleClick(mWindow, a, b, output, 2);
			dividebutton.handleClick(mWindow, a, b, output, 3);
			ebutton.handleClick(mWindow, output);
			cebutton.handleClick(mWindow, output, aused, bused, a, b);
			break;
		}
	}
}

void App::handleInput(sf::Keyboard::Key key, bool isPressed)
{
	if (key == sf::Keyboard::Escape)
	{
		mWindow.close();
	}
	
}

void App::render()
{
	mWindow.clear();
	button1.show(mWindow);
	button2.show(mWindow);
	button3.show(mWindow);
	button4.show(mWindow);
	button5.show(mWindow);
	button6.show(mWindow);
	button7.show(mWindow);
	button8.show(mWindow);
	button9.show(mWindow);
	button0.show(mWindow);
	addbutton.show(mWindow);
	subtractbutton.show(mWindow);
	multiplybutton.show(mWindow);
	dividebutton.show(mWindow);
	ebutton.show(mWindow);
	cebutton.show(mWindow);
	mWindow.display();
}

