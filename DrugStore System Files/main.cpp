#include "CDrugStore.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <string>


int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new drug" << endl;
    cout << "2. Show data for all drugs" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}


int main() {
    CDrugStore Drug;

    while (true) {
        switch (ChoiceMenu()) {
        // Add new drug
        case 1:
            Drug.getData();
            Drug.storeDrug();

            continue;
        // Show data for all drugs
        case 2:
            Drug.displayAll();

            continue;
        // Exit
        case 3:
            break;
        }
        break;
    }
    return 0;
}