#include "CCard.h"
#include <iostream>

using namespace std;

CCard::CCard(string number, string arrival, string departure) {
	this->cardNumber = number;
	this->arrivalDate = arrival;
	this->departureDate = departure;
}

CCard::CCard() {
	this->cardNumber = "000000";
	this->arrivalDate = "00/00/0000";
	this->departureDate = "00/00/0000";
}

CCard::~CCard(void) {

}

void CCard::getData() {
	int day, month, year;
	string sArrday, sArrmonth, sArryear, DateArr;
	string sDepday, sDepmonth, sDepyear, DateDep;
	int nightsStayed;

	cin.ignore();
	cout << "Card Number: "; getline(cin, this->cardNumber);
	cout << "Arrival Date:\n";
	cout << "Day: "; cin >> day;
	cout << "Month: "; cin >> month;
	cout << "Year: "; cin >> year;
	sArrday = to_string(day);
	sArrmonth = to_string(month);
	sArryear = to_string(year);
	DateArr = sArrday + "/" + sArrmonth + "/" + sArryear;
	this->arrivalDate = DateArr;
	this->arrDay = day;
	this->arrMonth = month;
	this->arrYear = year;

	cout << "Departure Date:\n";
	cout << "Day: "; cin >> day;
	cout << "Month: "; cin >> month;
	cout << "Year: "; cin >> year;
	sDepday = to_string(day);
	sDepmonth = to_string(month);
	sDepyear = to_string(year);
	DateDep = sDepday + "/" + sDepmonth + "/" + sDepyear;
	this->departureDate = DateDep;

	if (stoi(sDepmonth) - stoi(sArrmonth) == 0) {
		nightsStayed = stoi(sDepday) - stoi(sArrday);
	}
	else {
		nightsStayed = (stoi(sDepday) + 30) - stoi(sArrday);
	}
	this->nightsStaid = nightsStayed;
}

void CCard::display() {
	cout << "Card Number: " << this->cardNumber << endl;
	cout << "Arrival Date: " << this->arrivalDate << endl;
	cout << "Departure Date: " << this->departureDate << endl;
	cout << "Nights Stayed: " << this->nightsStaid << endl;
}

string CCard::getCardNumber() {
	return this->cardNumber;
}

string CCard::getArrivalDate() {
	return this->arrivalDate;
}

string CCard::getDepartureDate() {
	return this->departureDate;
}

int CCard::getNightsStaid() {
	return this->nightsStaid;
}

int CCard::getArrDay() {
	return this->arrDay;
}

int CCard::getArrMonth() {
	return this->arrMonth;
}

int CCard::getArrYear() {
	return this->arrYear;
}