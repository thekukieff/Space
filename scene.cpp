#include "scene.hpp"

Coord Scene::Place::Where() const
{
	return coord_;
}

GameObject* Scene::Place::Who() const
{
	return obj_;
}



Scene::Place::Place(GameObject* obj, Coord place):
obj_(obj), coord_(place)
{


}


bool Scene::Place::Interract(const Place& other) const

{
	return coord_==other.coord_;
}


void Scene::Place::SetCoord(Coord coord)
{
	coord_ = coord;
}






//Scene::Place::~Place()
//{
//	delete obj_;
//}

int Scene::Size() const
{
	return placed_.size();
}

void Scene::Add(GameObject* obj, Coord place)
{
	placed_.emplace_back(obj, place);
}

Scene::Place& Scene::operator[](int i)
{
	auto start = placed_.begin();
	for (int k = 0; k < i; k++)
	{
		++start;//++start быстрее работает start++
	}
	return *start;
	// TODO: вставьте здесь оператор 
}
