#pragma once
#include "CShape.h"
#include <string>

using namespace std;

class CRectangle : virtual public CShape {
protected:
	string type = "Rectangle";
public:
	void getData();
	void display();
	string getType();
	float getSize();
public:
	CRectangle(float, float);
	CRectangle();
	~CRectangle();
};

