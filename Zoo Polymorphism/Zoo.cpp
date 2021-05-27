#include "CAnimal.h"
#include "OtherAnimals.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new Cat" << endl;
    cout << "2. Add new Lion" << endl;
    cout << "3. Add new Duck" << endl;
    cout << "4. Show all Animals" << endl;
    cout << "5. Delete an Animal" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main()
{
    vector <CAnimal*> zoo;
    string current_name, current_type;
    int current_age;

    while (true) {
        switch (ChoiceMenu()) {
        // Add new Cat
        case 1:
            cout << "Cat's name: "; cin >> current_name;
            cout << "Cat's age: "; cin >> current_age;

            zoo.push_back(new CCat(current_name, current_age));
            continue;
        // Add new Lion
        case 2:
            cout << "Lion's name: "; cin >> current_name;
            cout << "Lion's age: "; cin >> current_age;

            zoo.push_back(new CLion(current_name, current_age));
            continue;
        // Add new Duck
        case 3:
            cout << "Duck's name: "; cin >> current_name;
            cout << "Duck's age: "; cin >> current_age;

            zoo.push_back(new CDuck(current_name, current_age));
            continue;
        // Show all Animals
        case 4:
            for (int i = 0; i < zoo.size(); i++) {
                zoo[i]->talk();
            }
            continue;
        // Delete an Animal
        case 5:
            cout << "Delete Animal name: "; cin >> current_name;
            cout << "Delete Animal type(cat/duck/lion): "; cin >> current_type;

            for (int i = 0; i < zoo.size(); i++) {
                if (zoo[i]->getName() == current_name) {
                    if (zoo[i]->type() == current_type) {
                        zoo.erase(zoo.begin() + i);
                    }
                }
            }
            continue;
        case 6:
            break;
        }
        break;
    }
            
    return 0;
}

