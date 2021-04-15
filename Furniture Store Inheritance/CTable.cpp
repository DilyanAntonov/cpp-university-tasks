#include "CTable.h"
#include <iostream>
#include <string>

using namespace std;

CTable::CTable(int seats) {
	this->seats = seats;
}

CTable::CTable() {
	this->seats = 0;
}

CTable::~CTable(void) {
}

void CTable::getData() {
	CFurniture::getData();
	cout << "Number of seats: "; cin >> this->seats;
}

void CTable::display() {
	CFurniture::display();
	cout << "Number of seats: " << this->seats << endl;
}

int CTable::getSeats() {
	return this->seats;
}