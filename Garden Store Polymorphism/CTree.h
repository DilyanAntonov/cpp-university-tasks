#pragma once
#include "CPlant.h"
#include <string>

using namespace std;

class CTree : public CPlant {
protected:
	float height;
	int type; // 1=coniferous, 2=deciduous
public:
	void getData();
	void display();
	float getHeight();
	int getType();
	string plantType();
public:
	CTree(float, int);
	CTree();
	~CTree();
};