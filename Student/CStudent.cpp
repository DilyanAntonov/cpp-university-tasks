#include "CStudent.h";
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int nMarks = 5;
int CStudent::count = 0;

CStudent::CStudent(string name, string egn, int course) {
    this->name = name;
    this->EGN = egn;
    this->course = course;
    for (int i = 0; i < nMarks; i++) {
        cout << "Mark" << i + 1 << ": ";
        cin >> this->marks[i];
    }
    count++;
}

CStudent::CStudent() {
    this->name = "Undefined";
    this->EGN = "0000000000";
    this->course = 0;
}

CStudent::~CStudent(void) {

}

void CStudent::getData() {
    cin.ignore();
    cout << "Name: "; getline(cin, this->name);
    cout << "EGN: "; getline(cin, this->EGN);
    cout << "Course: "; cin >> this->course;
    cout << "Enter Marks: " << endl;
    for (int i = 0; i < nMarks; i++) {
        cout << "Mark" << i + 1 << ": ";
        cin >> this->marks[i];
    }
    count++;
}

void CStudent::display() {
    cout << "========================" << endl;
    cout << "Name: " << this->name << endl;
    cout << "EGN: " << this->EGN << endl;
    cout << "Course: " << this->course << endl;
    cout << "Grades: ";
    for (int i = 0; i < nMarks; i++) {
        cout << this->marks[i] << " ";
    }
    cout << "\n";
}

string CStudent::getName() {
    return this->name;
}

float CStudent::getAvrMark() {
    float sumMarks = 0;
    float avgMark;

    for (int i=0; i<nMarks; i++) {
        sumMarks += this->marks[i];
    }
    avgMark = sumMarks / nMarks;
    return avgMark;
}

string CStudent::getSex() {
    string sexChar = this->EGN.substr(8, 1);
    int sex = stoi(sexChar) % 2;

    if (sex == 0) {
        return "Male";
    }
    else
    {
        return "Female";
    }
}

string CStudent::getBirthDate() {
        string dayStr, monthStr, yearStr, ageStr;
        int day, month, year, age;
        
        // Getting the values form the EGN
        yearStr = this->EGN.substr(0, 2);
        monthStr = this->EGN.substr(2, 2);
        dayStr = this->EGN.substr(4, 2);

        // Converting to ints
        year = stoi(yearStr);
        month = stoi(monthStr);
        day = stoi(dayStr);
        
        // Check if year is above 1999
        if (year >= 0 && year <= 21) {
            month = month - 40;
        }
        if (year < 21) {
            year += 2000;
        }
        else {
            year += 1900;
        }

        // Check if birthday has passed
        if(month <= 3 && day <= 4){
            age = 2021 - year;
        }
        else {
            age = 2021 - (year + 1);
        }
        

        yearStr = to_string(year);
        monthStr = to_string(month);
        dayStr = to_string(day);
        ageStr = to_string(age);

        return dayStr + "/" + monthStr + "/" + yearStr + " and is " + ageStr + " years old";
}