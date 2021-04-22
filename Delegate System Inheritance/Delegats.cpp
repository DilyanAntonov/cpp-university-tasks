#include "CDelegate.h"
#include <iostream>

using namespace std;

int ChoiceMenu() {
    int choice;

    cout << "========================" << endl;
    cout << "1. Add new delegate" << endl;
    cout << "2. Show data for all delegats" << endl;
    cout << "3. Show price for a specific hotel" << endl;
    cout << "4. Show data for the earliest arrived man" << endl;
    cout << "5. Show data for all delegats from a city" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main() {
    int lastDelegate = 0;
    int lastCityDelegate = 0;
    int n = 200; // Number of maximum delegats
    string currentCity, currentHotel; // Data for 3.
    float currentSum;
    int currentEarliest = 0; // Index for 4.

    CDelegate** delegatsArr = new CDelegate * [n];
    CDelegate** cityDelegatsArr = new CDelegate * [n];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new delegate
        case 1:
            delegatsArr[lastDelegate] = new CDelegate();
            delegatsArr[lastDelegate]->getData();
            lastDelegate++;
            continue;

        // Show data for all delegats
        case 2:
            for (int i = 0; i < lastDelegate; i++) {
                delegatsArr[i]->display();
            }
            continue;

        // Show price for a specific hotel
        case 3:
            currentSum = 0;
            cout << "Hotel: "; cin >> currentHotel;
            cout << "City: "; cin >> currentCity;

            for (int i = 0; i < lastDelegate; i++) {
                if (delegatsArr[i]->getCity() == currentCity) {
                    if (delegatsArr[i]->getHotelName() == currentHotel) {
                        currentSum += delegatsArr[i]->getNightsStaid() * delegatsArr[i]->getHotelPrice();
                    }
                }
            }
            cout << "Summed Price: " << currentSum << " lv." << endl;
            continue;

        // Show data for the earliest arrived man
        case 4:
            // Finding the first man in the array
            for (int i = 0; i < lastDelegate; i++) {
                if (delegatsArr[i]->getSex() == "Man") {
                    currentEarliest = i;
                    break;
                }
            }
            
            // Finding the earliest arrived man
            for (int i = 0; i < lastDelegate; i++) {
                if (delegatsArr[i]->getSex() == "Man") {
                    if (delegatsArr[i]->getArrDay() < delegatsArr[currentEarliest]->getArrDay()) {
                        if (delegatsArr[i]->getArrMonth() <= delegatsArr[currentEarliest]->getArrMonth()) {
                            if (delegatsArr[i]->getArrYear() <= delegatsArr[currentEarliest]->getArrYear()) {
                                currentEarliest = i;
                            }
                        }
                    }
                }
            }
            cout << "The earliest arrived man: " << delegatsArr[currentEarliest]->getName() << endl;
            cout << "Hotel Name: " << delegatsArr[currentEarliest]->getHotelName() << endl;
            cout << "Room Number: " << delegatsArr[currentEarliest]->getRoomNumber() << endl;
            cout << "Price per Night: " << delegatsArr[currentEarliest]->getHotelPrice() << endl;
            continue;

        // Show data for all delegats from a city
        case 5:
            lastCityDelegate = 0;
            cout << "City: "; cin >> currentCity;

            for (int i = 0; i < lastDelegate; i++) {
                if (delegatsArr[i]->getCity() == currentCity) {
                    cityDelegatsArr[lastCityDelegate] = new CDelegate();
                    cityDelegatsArr[lastCityDelegate] = delegatsArr[i];
                    lastCityDelegate++;
                }
            }
            
            if (lastCityDelegate == 0) {
                cout << "There are no delegats from this city" << endl;
            }
            else {
                for (int i = 0; i < lastCityDelegate; i++) {
                    cityDelegatsArr[i]->display();
                }
            }
            continue;

        // Exit
        case 6:
            break;
        }
        break;
    }
}