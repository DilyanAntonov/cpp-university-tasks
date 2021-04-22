#include "CDelegate.h"
#include <iostream>

using namespace std;


CDelegate::CDelegate(string name, string egn, string city, float price) {
	this->name = name;
	this->EGN = egn;
	this->city = city;
	this->transportPrice = price;
}
CDelegate::CDelegate() {
	this->name = "Undefined";
	this->EGN = "0000000000";
	this->city = "Undefined";
	this->transportPrice = 0.0;
}
CDelegate::~CDelegate(void) {

}

void CDelegate::getData() {
	cout << "=======================\n";
	cin.ignore();
	cout << "Name: "; getline(cin, this->name);
	cout << "EGN: "; getline(cin, this->EGN);
	cout << "City: "; getline(cin, this->city);
	cout << "Transport Price: "; cin >> this->transportPrice;
	CCard::getData();
	CHotel::getData();
}

void CDelegate::display() {
	cout << "========================\n";
	cout << "Name: " << this->name << endl;
	cout << "EGN: " << this->EGN << endl;
	cout << "City: " << this->city << endl;
	cout << "Transport Price: " << this->transportPrice << endl;
	CCard::display();
	CHotel::display();
}	

string CDelegate::getName() {
	return this->name;
}

string CDelegate::getEGN() {
	return this->EGN;
}

string CDelegate::getCity() {
	return this->city;
}

string CDelegate::getSex() {
	string sexChar = this->EGN.substr(8, 1);
	int sex = stoi(sexChar) % 2;

	if (sex == 0) {
		return "Man";
	}
	else
	{
		return "Female";
	}
}

float CDelegate::getTransPrice() {
	return this->transportPrice;
}