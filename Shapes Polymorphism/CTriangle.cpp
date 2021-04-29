#include "CTriangle.h"
#include <iostream>

using namespace std;

CTriangle::CTriangle(float A, float B, float C) {
	this->a = A;
	this->b = B;
	this->c = C;
}

CTriangle::CTriangle() {
	this->a = 0.0;
	this->b = 0.0;
	this->c = 0.0;
}

CTriangle::~CTriangle(void) {

}

void CTriangle::getData() {
	CShape::setColor();
	cout << "a = "; cin >> this->a;
	cout << "b = "; cin >> this->b;
	cout << "c = "; cin >> this->c;
}

string CTriangle::getType() {
	return this->type;
}

float CTriangle::getSize() {
	return this->a + this->b + this->c;
}

void CTriangle::display() {
	cout << "=====================" << endl;
	cout << "Type: " << this->getType() << endl;
	CShape::display();
	cout << "a = " << this->a << endl;
	cout << "b = " << this->b << endl;
	cout << "c = " << this->c << endl;
	cout << "Size = " << this->CShape::getSize() << endl;
}