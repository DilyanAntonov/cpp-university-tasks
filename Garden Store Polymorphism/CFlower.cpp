#include "CFlower.h"
#include <iostream>

using namespace std;

CFlower::CFlower(string color) {
	this->color = color;
}

CFlower::CFlower(){
	this->color = "Undefined";
}

CFlower::~CFlower(void) {
}

void CFlower::getData() {
	CPlant::getData();
	cout << "Color: "; cin >> this->color;
}

void CFlower::display() {
	CPlant::display();
	cout << "Color: " << this->color << endl;
}

string CFlower::getColor() {
	return this->color;
}

string CFlower::plantType() {
	return "flower";
}