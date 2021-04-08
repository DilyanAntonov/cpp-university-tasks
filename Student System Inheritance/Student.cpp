#include "Student.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int nMarks = 10;

CStudent::CStudent(string fnum) {
	this->FNum = fnum;

    for (int i = 0; i < nMarks; i++) {
        for (int i = 0; i < nMarks; i++) {
            this->marks[i] = 0;
        }
    }

    for (int i = 0; i < nMarks; i++) {
        cout << "Mark" << i + 1 << ": ";
        cin >> this->marks[i];
    }
}

CStudent::CStudent() {
    this->FNum = "000000";
    for (int i = 0; i < nMarks; i++) {
        this->marks[i] = 0;
    }
}

CStudent::~CStudent(void) {

}

void CStudent::getData() {
    CPerson::getData();
    cout << "Fak. Number: "; cin >> this->FNum;
    cout << "Enter Marks: " << endl;
    for (int i = 0; i < nMarks; i++) {
        cout << "Mark" << i + 1 << ": ";
        cin >> this->marks[i];
    }
}

void CStudent::display() {
    CPerson::display();
    cout << "Fak. No: " << this->FNum << endl;
    cout << "Marks: ";
    for (int i = 0; i < nMarks; i++) {
        cout << this->marks[i] << " ";
    }
    cout << endl;
}

float CStudent::calcAvg() {
    // If mark = 0 => mark not existing
    float currentAvg;
    int stdMarksN = 0;
    float sumMarks = 0.0;


    for (int i = 0; i < nMarks; i++) {
        if (this->marks[i] == 0) { ; }
        else {
            sumMarks += this->marks[i];
            stdMarksN++;
        }
    }
    currentAvg = sumMarks / stdMarksN;
    return currentAvg;
}

string CStudent::getFNum() {
    return this->FNum;
}

bool CStudent::getBadMark() {
    for (int i = 0; i < nMarks; i++) {
        if (this->marks[i] == 2) { 
            return true;
            break;
        }
    }
}