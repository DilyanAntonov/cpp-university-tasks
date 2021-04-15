#include "CFurniture.h"
#include <iostream>
#include <string>

using namespace std;

CFurniture::CFurniture(string name, float price) {
	this->name = name;
	this->price = price;
}

CFurniture::CFurniture() {
	this->name = "Undefined";
	this->price = 0.00;
}

CFurniture::~CFurniture(void) {
}

void CFurniture::getData() {
	cin.ignore();
	cout << "Name: "; getline(cin, this->name);
	cout << "Price: "; cin >> this->price;
}

void CFurniture::display() {
	cout << "===================\n";
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << " lv." << endl;
}

string CFurniture::getName() {
	return this->name;
}

float CFurniture::getPrice() {
	return this->price;
}