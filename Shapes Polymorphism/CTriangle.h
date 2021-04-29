#pragma once
#include "CShape.h"
#include <string>

using namespace std;

class CTriangle : virtual public CShape {
protected:
	string type = "Triangle";
public:
	void getData();
	void display();
	float getSize();
	string getType();
public:
	CTriangle(float, float, float);
	CTriangle();
	~CTriangle();
};