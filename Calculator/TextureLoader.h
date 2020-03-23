/*
 * Credit to the folks behind the SFML Game Development Book for teaching me this concept. It's a great book that everyone should check
 * out if they plan to use SFML.
 */

#ifndef TEXTURELOADER_H_
#define TEXTURELOADER_H_
#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>
#include <SFML/Graphics.hpp>

class TextureLoader
{
public: //Loading textures
    void load(int id, const std::string& filename);

    sf::Texture& get(int id);
    const sf::Texture& get(int id) const;

private: //Storing stuff
    std::map<int, std::unique_ptr<sf::Texture>> mTextureMap;

};




#endif /* TEXTURELOADER_H_ */
