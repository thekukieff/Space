#pragma once

#ifndef GAME_OBJ_HPP
#define GAME_OBJ_HPP
#include <iostream>
#include "Coordinat.hpp"
#include "Status.hpp"
#include "controller.hpp"

class GameObject {
public:

	virtual ~GameObject() = default;
	virtual bool IsHarmable()const = 0;
	virtual void Action(int tick) = 0;
	virtual Coord Move() = 0;
	virtual void Modify(GameObject& obj) = 0;
	virtual void TakeHarm(int amount) = 0;
	virtual Status *GetStatus() = 0;
	virtual void SetController(const controller* obj) = 0;

private:
	controller* controller_;
};
// = 0 означает что в теле класса нет реализации


#endif //GAME_OBJ_HPP