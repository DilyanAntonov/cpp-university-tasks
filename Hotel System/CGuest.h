#pragma once
#include <string>

using namespace std;

class CGuest{
private:
	string name, EGN;
	string city;
	int familyStatus;
	int stayDuration;
	float price;
public:
	void getData();
	void display();
	string getCity();
	string getName();
	int getBirthYear();
	int getFamilyStatus();
	float getTotalPrice();
public:
	CGuest(string, string, string, int, int, int);
	CGuest();
	~CGuest();
};

