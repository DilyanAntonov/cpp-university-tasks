#pragma once
#include "CFurniture.h"

class CTable : public CFurniture {
protected:
	int seats;
public:
	void getData();
	void display();
	int getSeats();
public:
	CTable(int);
	CTable();
	~CTable();
};

