#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

CPerson::CPerson(string name, string egn) {
	this->name = name;
	this->EGN = egn;
}

CPerson::CPerson() {
	this->name = "Undefined";
	this->EGN = "0000000000";
}

CPerson::~CPerson(void) {

}

void CPerson::getData() {
	cin.ignore();
	cout << "Name: "; getline(cin, this->name);
	cout << "EGN: "; getline(cin, this->EGN);
}

void CPerson::display() {
	cout << "===================\n";
	cout << "Name: " << this->name << endl;
	cout << "EGN: " << this->EGN << endl;
}

string CPerson::getName() {
	return this->name;
}

string CPerson::getEGN() {
	return this->EGN;
}