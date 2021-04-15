#include <iostream>
#include "CTable.h"
#include "CChair.h"

int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Enter data for a Table" << endl;
    cout << "2. Enter data for a Chair" << endl;
    cout << "3. Show data for all furniture" << endl;
    cout << "4. Show the cheapest Chair" << endl;
    cout << "5. Show the mose expensive Table" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main() {
    int n = 50; //Number of maxinum items
    int lastTable = 0;
    int lastChair = 0;

    CTable** tableArr = new CTable * [n];
    CChair** chairArr = new CChair * [n];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new Table
        case 1:
        {
            tableArr[lastTable] = new CTable();
            tableArr[lastTable]->getData();
            lastTable++;
            continue;
        }
        // Add new Chair
        case 2:
        {
            chairArr[lastChair] = new CChair();
            chairArr[lastChair]->getData();
            lastChair++;
            continue;
        }
        // Show data for all furniture
        case 3:
        {
            cout << "Tables: " << endl;
            if (lastTable == 0) {
                cout << "There are no Tables" << endl;
            }
            else {
                for (int i = 0; i < lastTable; i++) {
                    tableArr[i]->display();
                }
            }

            cout << endl;
            cout << "Chairs: " << endl;
            if (lastChair == 0) {
                cout << "There are no Chairs" << endl;
            }
            else {
                for (int i = 0; i < lastChair; i++) {
                    chairArr[i]->display();
                }
            }
            continue;
        }
        // Show the cheapest Chair
        case 4:
        {
            float lowestPrice = chairArr[0]->getPrice();
            float currentLowest = 0.0;
            int lowestIndex = 0;

            for (int i = 1; i < lastChair; i++) {
                currentLowest = chairArr[i]->getPrice();
                if (currentLowest < lowestPrice) {
                    lowestPrice = currentLowest;
                    lowestIndex = i;
                }
            }
            cout << "The cheapest Chair:\n";
            chairArr[lowestIndex]->display();
            continue;
        }
        // Show the mose expensive Table
        case 5:
        {
            float highestPrice = tableArr[0]->getPrice();
            float currentHighest = 0.0;
            int highestIndex = 0;

            for (int i = 1; i < lastTable; i++) {
                currentHighest = tableArr[i]->getPrice();
                if (currentHighest > highestPrice) {
                    highestPrice = currentHighest;
                    highestIndex = i;
                }
            }
            cout << "The most expensive Tavle:\n";
            tableArr[highestIndex]->display();
            continue;
        }
        // Exit
        case 6:
            break;
        }
        break;
    }
    return 0;
}