#include "CGuest.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int lastGuest = 0;
int lastUnmarriedMan = 0;
string city;
int year;

int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new guest" << endl;
    cout << "2. Show data for all guests" << endl;
    cout << "3. Show price paid by all married guests from a specific city" << endl;
    cout << "4. Show all unmaried guests born in a specific year" << endl;
    cout << "5. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main() {
    int n = 200; // Number of maximum guests

    CGuest** guestsArr = new CGuest*[n];
    CGuest** unmarriedGuestsArr = new CGuest*[n];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new guest
        case 1:
            guestsArr[lastGuest] = new CGuest();
            guestsArr[lastGuest]->getData();
            lastGuest++;
            continue;
        // Show data for all guests
        case 2:
            for (int i = 0; i < lastGuest; i++) {
                guestsArr[i]->display();
            }
            continue;
        // Show price paid by guests from a specific city
        case 3:
            cout << "Enter a city: "; cin >> city;
            for (int i = 0; i < lastGuest; i++) {
                if (guestsArr[i]->getCity() == city && guestsArr[i]->getFamilyStatus() == 2) {
                    cout << "========================" << endl;
                    cout << "Name: " << guestsArr[i]->getName() << endl;
                    cout << "Price paid: " << guestsArr[i]->getTotalPrice() << endl;
                    cout << "========================" << endl;
                }
                else{
                    cout << "No guests found";
                    cout << "========================" << endl;
                }
            }
            continue;
        // Show all unmaried man born in a specific year
        case 4:
            cout << "Enter a year: "; cin >> year;
            for (int i = 0; i < lastGuest; i++) {
                if (guestsArr[i]->getBirthYear() == year && guestsArr[i]->getFamilyStatus() == 1) {
                    unmarriedGuestsArr[lastUnmarriedMan] = guestsArr[i];
                    lastUnmarriedMan++;
                }
                else{
                    cout << "No guests found";
                    cout << "========================" << endl;
                }
            }
            for (int i = 0; i < lastUnmarriedMan; i++) {
                unmarriedGuestsArr[i]->display();
            }
            continue;
        // Exit
        case 5:
            break;
        }
        break;
    }

    delete[] guestsArr;
    delete[] unmarriedGuestsArr;

    return 0;
}