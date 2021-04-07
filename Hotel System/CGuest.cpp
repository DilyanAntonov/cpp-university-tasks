#include "CGuest.h"
#include <iostream>

using namespace std;

CGuest::CGuest(string name, string egn, string city, int familyStatus, int stayDuration, int price) {
	this->name = name;
	this->EGN = egn;
	this->city = city;
	this->familyStatus = familyStatus;
	this->stayDuration = stayDuration;
	this->price = price;
}

CGuest::CGuest() {
	this->name = "Undefined";
	this->EGN = "Undefined";
	this->city = "Undefined";
	this->familyStatus = 0;
	this->stayDuration = 0;
	this->price = 0;
}

CGuest::~CGuest(void) {

}

void CGuest::getData() {
	cin.ignore();
	cout << "Name: "; getline(cin, this->name);
	cout << "EGN: "; getline(cin, this->EGN);
	cout << "City: "; getline(cin, this->city);
	cout << "Family Status (1-unmerried/2-merried): "; cin >> this->familyStatus;
	cout << "Stay Duration: "; cin >> this->stayDuration;
	cout << "Bed price per night: "; cin >> this->price;
}

void CGuest::display() {
	string family = (this->familyStatus == 1) ? "unmarried" : "married";

	cout << "========================" << endl;
	cout << "Name: " << this->name << endl;
	cout << "EGN: " << this->EGN << endl;
	cout << "City: " << this->city << endl;
	cout << "Family Status: " << family << endl;
	cout << "Stay Duration: " << this->stayDuration << endl;
	cout << "Bed price per night: " << this->price << endl;
	cout << "--------------" << endl;
	cout << "Price paid: " << this->stayDuration * this->price << " lv." << endl;
}

string CGuest::getName() {
	return this->name;
}

string CGuest::getCity() {
	return this->city;
}

float CGuest::getTotalPrice() {
	return this->stayDuration * this->price;
}

int CGuest::getFamilyStatus() {
	return this->familyStatus;
}

int CGuest::getBirthYear() {
	int year;
	string yearStr;

	yearStr = this->EGN.substr(0, 2);
	year = stoi(yearStr);

	if (year < 21) {
		year += 2000;
	}
	else {
		year += 1900;
	}

	return year;
}