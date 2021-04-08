#pragma once
#include "Person.h"
class CStudent: public CPerson{
protected:
	string FNum;
	int marks[10];
public:
	void getData();
	void display();
	float calcAvg();
	string getFNum();
	bool getBadMark();
public:
	CStudent(string);
	CStudent();
	~CStudent();
};

