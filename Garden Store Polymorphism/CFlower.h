#pragma once

#include "CPlant.h"
class CFlower : public CPlant{
protected:
	string color;
public:
	void getData();
	void display();
	string getColor();
	string plantType();
public:
	CFlower(string);
	CFlower();
	~CFlower();
};

