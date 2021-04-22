#include "CHotel.h"
#include <iostream>

using namespace std;

CHotel::CHotel(string name, int room, float price) {
	this->hotelName = name;
	this->roomNumber = room;
	this->hotelPrice = price;
}

CHotel::CHotel() {
	this->hotelName = "Undefined";
	this->roomNumber = 0;
	this->hotelPrice = 0.0;
}

CHotel::~CHotel(void) {

}

void CHotel::getData() {
	cin.ignore();
	cout << "Hotel Name: "; getline(cin, this->hotelName);
	cout << "Room Number: "; cin >> this->roomNumber;
	cout << "Room Price per Night: "; cin >> this->hotelPrice; cout << " lv.\n";
}

void CHotel::display() {
	cout << "Hotel Name: " << this->hotelName << endl;
	cout << "Room Number: " << this->roomNumber << endl;
	cout << "Room Price per Night: " << this->hotelPrice << endl;
}

string CHotel::getHotelName() {
	return this->hotelName;
}

int CHotel::getRoomNumber() {
	return this->roomNumber;
}

float CHotel::getHotelPrice() {
	return this->hotelPrice;
}