#pragma once
#include <string>

using namespace std;

class CShape {
protected:
	float a = 0;
	float b = 0;
	float c = 0;
	string color;
public:
	virtual void getData() = 0;
	virtual void display() = 0;
	virtual float getSize() = 0;
	virtual string getType() = 0;
	void setColor();
	string getColor();
public:
	CShape(string);
	CShape();
	~CShape();
};