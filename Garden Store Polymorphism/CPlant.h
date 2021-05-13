#pragma once
#include <string>

using namespace std;

class CPlant {
protected:
	string name;
	float price;
	int quantity;
public:
	virtual void getData();
	virtual void display();
	virtual string plantType() = 0;
	string getName();
	float getPrice();
	int getQuantity();
public:
	CPlant(string, float, int);
	CPlant();
	~CPlant();
};

