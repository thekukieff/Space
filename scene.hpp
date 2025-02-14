#pragma once

#ifndef SCENE_HPP
#define SCENE_HPP
#include <List>
#include "GameOBJ.hpp"

class Scene {
	class Place;

private:
	class Place {
	public:
		Place(GameObject* obj, Coord place);
		Coord Where()const;
		GameObject* Who()const;
		//~Place();
		//Place(const Place& other);

		//Place operator=(const Place& other);
		//������� 3 ������������ ����������� �������� 
		// � ������� ������ � ���� obj_
		// ���� ���� �� ���� ����� �� 3 ���������, �� ����� ������������� ��� 3
		//
		bool Interract(const Place& other)const;//������������� 
		void SetCoord(Coord coord);

	private:
		GameObject* obj_;
		Coord coord_;
	};
public:
	int Size()const;
	void Add(GameObject* obj, Coord place);

	int Find(Coord place_obj)const;
	void Remove(int index);

	


	std::list <Place> placed_;

	Place& operator[](int i);
};


#endif