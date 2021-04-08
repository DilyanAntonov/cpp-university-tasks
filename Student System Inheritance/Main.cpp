#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new student" << endl;
    cout << "2. Show the average mark for the group" << endl;
    cout << "3. Show students with 2" << endl;
    cout << "4. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main()
{
    int n = 100; // Number of students in the group
    int lastStudent = 0;
    float groupSum = 0;
    float groupAvg;

    CStudent** groupArr = new CStudent* [n];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new student
        case 1:
            groupArr[lastStudent] = new CStudent();
            groupArr[lastStudent]->getData();
            lastStudent++;
            continue;
        // Show the average mark for the group
        case 2:
            for (int i = 0; i < lastStudent; i++) {
                groupSum += groupArr[i]->calcAvg();
            }
            groupAvg = groupSum / lastStudent;

            cout << "Group Average Mark: " << groupAvg << endl;
            groupSum = 0;
            continue;
        case 3:
            for (int i = 0; i < lastStudent; i++) {
                if (groupArr[i]->getBadMark() == true) {
                    groupArr[i]->display();
                }
            }
            continue;
        // Exit
        case 4:
            break;
        }
        break;
    }

    delete[] groupArr;
    return 0;
}
