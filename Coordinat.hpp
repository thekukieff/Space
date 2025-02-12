
#ifndef COORDINAT_HPP
#define COORDINAT_HPP
#include <iostream>
#include <type_traits>//—войства типа данных


class Coord {
public:
	Coord();
	Coord(int x, int y, int z);

	int GetX()const;
	void SetX(int x);

	int GetZ()const;
	void SetZ(int z);

	int GetY()const;
	void SetY(int y);

	
	friend bool operator==(const Coord& lsv, const Coord& rsv);
	friend bool operator!=(const Coord& lsv, const Coord& rsv);

	//дл€ работы с коллекц€ми
	size_t hash()const;

	friend std::ostream& operator<<(std::ostream& out, const Coord& rsv);
	friend std::istream& operator>>(std::ostream& in, const Coord& rsv);



private:
	int x_, y_, z_;
};




#endif //Coordinat_hpp