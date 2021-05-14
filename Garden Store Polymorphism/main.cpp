#include <iostream>
#include "CPlant.h";
#include "CTree.h";
#include "CFlower.h";

using namespace std;

int ChoiceMenu() {
    cout << "==================" << endl;
    int choice;
    cout << "1. Add new Tree" << endl;
    cout << "2. Add new Flower" << endl;
    cout << "3. Show data for all Plants" << endl;
    cout << "4. Show data for the most expensive Flower" << endl;
    cout << "5. Show data for the Trees with more than 5 Quantity" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "==================" << endl;

    return choice;
}

int main() {
    int n = 200; // Number of maximum plants
    int lastPlant = 0;

    CPlant** plantsArr = new CPlant * [n];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new Tree
        case 1:
        {
            plantsArr[lastPlant] = new CTree;
            plantsArr[lastPlant]->getData();
            lastPlant++;
            continue;
        }
        // Add new Flower
        case 2:
        {
            plantsArr[lastPlant] = new CFlower;
            plantsArr[lastPlant]->getData();
            lastPlant++;
            continue;
        }
        // Show data for all Plants
        case 3:
        {   
            if (lastPlant == 0) {
                cout << "There are no Plants" << endl;
            }
            else {
                for (int i = 0; i < lastPlant; i++) {
                    plantsArr[i]->display();
                }
            }
            continue;
        }
        // Show data for the most expensive Flower
        case 4:
        {
            float mostExpPrice = 0.0;
            int mostExpID = 0;

            for (int i = 0; i < lastPlant; i++) {
                if (plantsArr[i]->plantType() == "flower") {
                    if (plantsArr[i]->getPrice() > mostExpPrice) {
                        mostExpPrice = plantsArr[i]->getPrice();
                        mostExpID = i;
                    }
                }
            }

            if (mostExpPrice == 0.0) {
                cout << "There are no Flowers" << endl;
            }
            else {
                cout << "The most expensive flower: \n";
                plantsArr[mostExpID]->display();
            }
            continue;
        }
        // Show data for the Trees with more than 5 Quantity
        case 5:
        {   
            // Contains the data for each Tree with Quantity >= 5 
            CPlant** manyTreesArr = new CPlant * [n];
            int lastTree = 0;

            for (int i = 0; i < lastPlant; i++) {
                if (plantsArr[i]->plantType() == "tree") {
                    if (plantsArr[i]->getQuantity() >= 5) {
                        manyTreesArr[lastTree] = plantsArr[i];
                        lastTree++;
                    }
                }
            }

            if (lastTree == 0) {
                cout << "There are no Trees with Quantity >= 5" << endl;
            }
            else {
                cout << "All Trees with Quantity >= 5: \n";

                for (int i = 0; i < lastTree; i++) {
                    manyTreesArr[i]->display();
                }
            }
            continue;
        }
        // Exit
        case 6:
            break;
        }
        break;
    }

    delete[] plantsArr;

    return 0;
}