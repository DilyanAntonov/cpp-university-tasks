#include "CDrugStore.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <exception>


using namespace std;

CDrugStore::CDrugStore(string name, float price, int quantity, int d, int m, int y) {
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	this->d = d;
	this->m = m;
	this->y = y;
}

CDrugStore::CDrugStore() {
	this->name = "Undefined";
	this->price = 0.0;
	this->quantity = 0;
	this->d = 0;
	this->m = 0;
	this->y = 0;
}

CDrugStore::~CDrugStore(void) {

}

void CDrugStore::getData() {
	cout << "========================" << endl;
	cin.ignore();
	cout << "Name: "; getline(cin, this->name);
	cout << "Price: "; cin >> this->price;
	cout << "Quantity: "; cin >> this->quantity;
	cout << "Expiration day:" << endl;
	cout << "Day: "; cin >> this->d;
	cout << "Month: "; cin >> this->m;
	cout << "Year: "; cin >> this->y;

	if (this->d > 31 || this->m > 12 || this->y < 2021) {
		cout << "Invalid Date" << endl;
		terminate();
	}
}

void CDrugStore::display() {
	cout << "========================" << endl;
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Quantity: " << this->quantity << endl;
	cout << "Expiration day: " << to_string(this->d) << "/" << to_string(this->m) << "/" << to_string(this->y) << endl;
}

bool CDrugStore::compareDates(int dx, int mx, int yx) {
	if (dx > 31 || mx > 12 || yx < 2021) {
		cout << "Invalid Date" << endl;
		return false;
	}

	if (this->y >= yx) {
		if (this->m >= mx) {
			if (this->d >= dx){
				return true;
			}
		}
	}
	else {
		return false;
	}
}

string CDrugStore::getName() {
	return this->name;
}

float CDrugStore::getPrice() {
	return this->price;
}

int CDrugStore::getQuantity() {
	return this->quantity;
}
