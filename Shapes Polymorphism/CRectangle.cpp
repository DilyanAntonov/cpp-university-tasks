#include "CRectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle(float A, float B) {
	this->a = A;
	this->b = B;
}

CRectangle::CRectangle() {
	this->a = 0.0;
	this->b = 0.0;
}

CRectangle::~CRectangle(void) {

}

void CRectangle::getData() {
	CShape::setColor();
	cout << "a = "; cin >> this->a;
	cout << "b = "; cin >> this->b;
}

float CRectangle::getSize() {
	return 2*this->a + 2*this->b;
}

string CRectangle::getType() {
	return this->type;
}

void CRectangle::display() {
	cout << "=====================" << endl;
	cout << "Type: " << this->getType() << endl;
	CShape::display();
	cout << "a = " << this->a << endl;
	cout << "b = " << this->b << endl;
	cout << "Size = " << this->getSize() << endl;
}