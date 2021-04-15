#pragma once
#include "CFurniture.h"
#include <string>

using namespace std;

class CChair : public CFurniture {
protected:
	string color;
public:
	void getData();
	void display();
	string getColor();
public:
	CChair(string);
	CChair();
	~CChair();
};