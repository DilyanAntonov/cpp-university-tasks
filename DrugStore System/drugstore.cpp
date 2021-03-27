#include "CDrugStore.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int lastDrug = 0;
int lastLowQuantity = 0;
int lastExpiring = 0;
int day, month, year;

int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new drug" << endl;
    cout << "2. Show data for all drugs" << endl;
    cout << "3. Show all drugs above 5lv." << endl;
    cout << "4. Show all drugs below 10 quantity" << endl;
    cout << "5. Show all expiring drugs" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main() {
    CDrugStore allDrugsArr[500];
    CDrugStore lowQuantityDrugsArr[500];
    string expiringDrugsArr[500];
        
    while (true) {
        switch (ChoiceMenu()) {
        // Add new drug
        case 1:
            allDrugsArr[lastDrug].getData();
            lastDrug++;
            continue;
        // Show data for all drugs
        case 2:
            for (int i = 0; i < lastDrug; i++) {
                allDrugsArr[i].display();
            }
            cout << "--------------" << endl;
            continue;
        // Show all drugs above 5lv
        case 3:
            for (int i = 0; i < lastDrug; i++) {
                if (allDrugsArr[i].getPrice() >= 5.0) {
                    allDrugsArr[i].display();
                }
            }
            continue;
        // Show all drugs below 10 quantity
        case 4:
            for (int i = 0; i < lastDrug; i++) {
                if (allDrugsArr[i].getQuantity() < 10) {
                    lowQuantityDrugsArr[lastLowQuantity] = allDrugsArr[i];
                    lastLowQuantity++;
                }
            }
            for (int i = 0; i < lastLowQuantity; i++) {
                lowQuantityDrugsArr[i].display();
            }
            continue;
        // Show all expiring drugs
        case 5:
            cout << "Expiring day: " << endl;
            cout << "Day: "; cin >> day;
            cout << "Month: "; cin >> month;
            cout << "Year: "; cin >> year;
            cout << "========================" << endl;

            for (int i = 0; i < lastDrug; i++) {
                if (allDrugsArr[i].compareDates(day, month, year)) {
                    expiringDrugsArr[lastExpiring] = allDrugsArr[i].getName();
                    lastExpiring++;
                }
            }
            for (int i = 0; i < lastExpiring; i++) {
                cout << expiringDrugsArr[i] << endl;
            }
            lastExpiring = 0;
            continue;
        // Exit
        case 6:
            break;
        }
        break;
    }


    return 0;
}
