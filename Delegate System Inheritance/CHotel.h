#pragma once
#include <string>

using namespace std;

class CHotel {
protected:
	string hotelName;
	int roomNumber;
	float hotelPrice;
public:
	void getData();
	void display();
	string getHotelName();
	int getRoomNumber();
	float getHotelPrice();
public:
	CHotel(string, int, float);
	CHotel();
	~CHotel();
};

