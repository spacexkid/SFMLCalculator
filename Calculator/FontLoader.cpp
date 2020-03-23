#include "FontLoader.h"

void FontLoader::load(int id, const std::string& filename)
{
	std::unique_ptr<sf::Font> font(new sf::Font());
	if (!font->loadFromFile(filename))
	{
		throw std::runtime_error("FontLoader::load - Failed to load " + filename);
	}
	//Checks to see if theres a texture
	auto inserted = mFontMap.insert(std::make_pair(id, std::move(font)));
	assert(inserted.second);
}

//Loads a texture into sprite (uses id for texture)
sf::Font& FontLoader::get(int id)
{
	auto found = mFontMap.find(id);
	assert(found != mFontMap.end());
	return *found->second;
}

const sf::Font& FontLoader::get(int id) const
{
	auto found = mFontMap.find(id);
	assert(found != mFontMap.end());
	return *found->second;
}


