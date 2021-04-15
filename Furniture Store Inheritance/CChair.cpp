#include "CChair.h"
#include <iostream>
#include <string>

using namespace std;

CChair::CChair(string color) {
	this->color = color;
}

CChair::CChair() {
	this->color = "Undefined";
}

CChair::~CChair(void) {
}

void CChair::getData() {
	CFurniture::getData();
	cout << "Color: "; cin >> this->color;
}

void CChair::display() {
	CFurniture::display();
	cout << "Color: " << this->color << endl;
}

string CChair::getColor() {
	return this->color;
}