#pragma once
#include <string>

using namespace std;

class CStudent
{
private:
    string name, EGN;
    int marks[5];
    int course=1;
    static int count;
public:
    static int getNumOfStudents() { return count; }
    void getData();
    void display();
    float getAvrMark();
    string getName();
    string getSex();
    string getBirthDate();

public:
    CStudent(string, string, int);
    CStudent();
    ~CStudent();
};