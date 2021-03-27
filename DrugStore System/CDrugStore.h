#pragma once
#include <iostream>
#include <string>

using namespace std;

class CDrugStore{
private:
	string name;
	float price;
	int quantity;
	int d, m, y;
public:
	void getData();
	void display();
	string getName();
	float getPrice();
	int getQuantity();
	bool compareDates(int, int, int);
public:
	CDrugStore(string, float, int, int, int, int);
	CDrugStore();
	~CDrugStore();
};