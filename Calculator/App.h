#pragma once
#include <SFML/Graphics.hpp>
#include "NumberButton.h"
#include "OperationButton.h"
#include "EqualButton.h"
#include "CEButton.h"


class App
{
public://Constructor and run method
	App();
	void run();

private://Functions
	void processEvents();

	void render();
	void handleInput(sf::Keyboard::Key key, bool isPressed);

private://Variables
	sf::RenderWindow mWindow;
	float output;
	float a;
	float b;
	bool aused = false;
	bool bused = false;
	
	

	NumberButton button1{ NumberButton::NUMBER1, 2.0f, 100.0f, "buttons/1.png" };
	NumberButton button2{ NumberButton::NUMBER2, 100.0f, 100.0f, "buttons/2.png" };
	NumberButton button3{ NumberButton::NUMBER3, 205.0f, 100.0f, "buttons/3.png" };
	NumberButton button4{ NumberButton::NUMBER4, 2.0f, 180.0f, "buttons/4.png" };
	NumberButton button5{ NumberButton::NUMBER5, 100.0f, 180.0f, "buttons/5.png" };
	NumberButton button6{ NumberButton::NUMBER6, 200.0f, 180.0f, "buttons/6.png" };
	NumberButton button7{ NumberButton::NUMBER7, 5.0f, 260.0f, "buttons/7.png" };
	NumberButton button8{ NumberButton::NUMBER8, 100.0f, 260.0f, "buttons/8.png" };
	NumberButton button9{ NumberButton::NUMBER9, 200.0f, 260.0f, "buttons/9.png" };
	NumberButton button0{ NumberButton::NUMBER0, 100.0f, 340.0f, "buttons/0.png" };

	OperationButton addbutton{10, OperationButton::ADD, 305.0f, 100.0f, "buttons/+.png" };
	OperationButton subtractbutton{ 11, OperationButton::SUBTRACT, 305.0f, 180.0f, "buttons/-.png" };
	OperationButton multiplybutton{ 12, OperationButton::MULTIPLY, 300.0f, 260.0f, "buttons/multiply.png" };
	OperationButton dividebutton{ 13, OperationButton::DIVIDE, 200.0f, 340.0f, "buttons/divide.png" };

	EqualButton ebutton{ 14, 300.0f, 340.0f, "buttons/equal.png" };
	CEButton cebutton{ 15, 5.0f, 340.0f, "buttons/CE.png" };
};