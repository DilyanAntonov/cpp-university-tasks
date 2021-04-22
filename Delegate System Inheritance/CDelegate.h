#pragma once
#include "CCard.h"
#include "CHotel.h"
#include <string>

using namespace std;

class CDelegate : public CCard, public CHotel {
protected:
	string name, EGN, city;
	string sex;
	float transportPrice;
public:
	void getData();
	void display();
	string getName();
	string getEGN();
	string getCity();
	string getSex();
	float getTransPrice();
public:
	CDelegate(string, string, string, float);
	CDelegate();
	~CDelegate();
};

