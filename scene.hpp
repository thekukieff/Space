#pragma once

#ifndef SCENE_HPP
#define SCENE_HPP
#include <List>
#include "GameOBJ.hpp"

class Scene {
public:

private:
	std::list <GameObject> placed_;
	class Place {
	public:
		Place(GameObject* obj, Coord place);
		Coord Where()const;
		GameObject* Who()const;

	private:
		GameObject* obj;
		Coord coord_;
	};

};


#endif