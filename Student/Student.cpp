#include "CStudent.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int lastStudent = 0;

int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new student" << endl;
    cout << "2. Show data for specific student" << endl;
    cout << "3. Show all students" << endl;
    cout << "4. Show average grade for a student" << endl;
    cout << "5. Show student's sex" << endl;
    cout << "6. Show student's Birth Date" << endl;
    cout << "7. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main() {
   CStudent studentsArr[200];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new student
        case 1:
            studentsArr[lastStudent].getData();
            lastStudent++;
            continue;
        // Show data for specific student
        case 2:
            int idStud;
            cout << "ID of the student:"; cin >> idStud;
            studentsArr[idStud].display();
            continue;
        // Show all students
        case 3:
            for (int i=0; i<lastStudent; i++){
                studentsArr[i].display();
            }
            continue;
        // Get average grade for a student
        case 4:
            int idStudAvg;
            cout << "ID of the student: "; cin >> idStudAvg;
            cout << studentsArr[idStudAvg].getName() << " average is " << studentsArr[idStudAvg].getAvrMark() << endl;
            continue;
        // Get student's sex
        case 5:
            int idStudSex;
            cout << "ID of the student: "; cin >> idStudSex;
            cout << studentsArr[idStudSex].getName() << " sex is " << studentsArr[idStudSex].getSex() << endl;
            continue;
        // Get student's Birth Date
        case 6:
            int idStudBD;
            cout << "ID of the student: "; cin >> idStudBD;
            cout << studentsArr[idStudBD].getName() << " Birth Date is  " << studentsArr[idStudBD].getBirthDate() << endl;
            continue;
        //exit
        case 7:
            break;
        }
        break;
    }
    return 0;
}