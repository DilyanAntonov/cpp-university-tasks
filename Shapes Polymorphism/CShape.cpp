#include "CShape.h"
#include <iostream>

using namespace std;

CShape::CShape(string color) {
	this->color = color;
}

CShape::CShape() {
	this->color = "Undefined";
}

CShape::~CShape(void) {

}

void CShape::display() {
	cout << "Color: " << this->color << endl;
}

float CShape::getSize() {
	return this->a + this->b + this->c;
}

void CShape::setColor() {
	cin.ignore();
	cout << "Color: "; getline(cin, this->color);
}
string CShape::getColor() {
	return this->color;
}