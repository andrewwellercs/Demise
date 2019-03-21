#include "../utils/Vector2d.h"
#include "../utils/Point2d.h"

#include <SFML/Graphics/Color.hpp>

namespace geom
{
	class Wall
	{
	private:
		utils::Vector2d face;
		utils::Vector2d normal;
		utils::Point2d center;
		sf::Color color;
	public:
		//we dont need default constructor, that's bad behavior
		//takes the face as parameter
		Wall(utils::Vector2d);
		Wall(utils::Point2d start, utils::Point2d end);

		//useful for building bsp
		bool inFrontOf(const Wall&) const;

		//getters
		utils::Point2d  getCenter() const;
		utils::Vector2d getFace()   const;
		utils::Vector2d getNormal() const;
		sf::Color       getColor() const;
	};
}