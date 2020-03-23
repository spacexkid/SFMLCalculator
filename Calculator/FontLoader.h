#pragma once
#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>
#include <SFML/Graphics.hpp>

class FontLoader
{
public:
	void load(int id, const std::string& filename);

	sf::Font& get(int id);
	const sf::Font& get(int id) const;


private:
	std::map<int, std::unique_ptr<sf::Font>> mFontMap;
};