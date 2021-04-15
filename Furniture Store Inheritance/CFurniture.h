#pragma once
#include <string>

using namespace std;

class CFurniture {
protected:
	string name;
	float price;
public:
	void getData();
	void display();
	string getName();
	float getPrice();
public:
	CFurniture(string, float);
	CFurniture();
	~CFurniture();
};