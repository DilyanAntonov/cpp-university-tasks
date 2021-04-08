#pragma once
#include <string>

using namespace std;

class CPerson{
protected:
	string name, EGN;
public:
	void getData();
	void display();
	string getName();
	string getEGN();
public:
	CPerson(string, string);
	CPerson();
	~CPerson();
};