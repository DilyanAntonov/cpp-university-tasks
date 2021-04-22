#pragma once
#include <string>

using namespace std;

class CCard {
protected:
	string cardNumber;
	string arrivalDate, departureDate;
	int arrDay, arrMonth, arrYear;
	int nightsStaid;
public:
	void getData();
	void display();
	string getCardNumber();
	string getArrivalDate();
	string getDepartureDate();
	int getNightsStaid();
	int getArrDay();
	int getArrMonth();
	int getArrYear();
public:
	CCard(string, string, string);
	CCard();
	~CCard();
};