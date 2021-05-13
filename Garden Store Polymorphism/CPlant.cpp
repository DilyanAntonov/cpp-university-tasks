#include "CPlant.h"
#include <iostream>

using namespace std;

CPlant::CPlant(string name, float price, int quantity) {
	this->name = name;
	this->price = price;
	this->quantity = quantity;
}

CPlant::CPlant() {
	this->name = "Undefined";
	this->price = 0.0;
	this->quantity = 0;
}

CPlant::~CPlant(void) {
}

void CPlant::getData() {
	cout << "==================" << endl;
	cin.ignore();
	cout << "Name: "; getline(cin, this->name);
	cout << "Price: "; cin >> this->price;
	cout << "Quantity: "; cin >> this->quantity;

}

void CPlant::display() {
	cout << "==================" << endl;
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Quantity: " << this->quantity << endl;
}


string CPlant::getName() {
	return this->name;
}

float CPlant::getPrice() {
	return this->price;
}

int CPlant::getQuantity() {
	return this->quantity;
}