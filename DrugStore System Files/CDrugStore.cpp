#include "CDrugStore.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <string>

void CDrugStore::getData() {
    cout << "========================" << endl;
    cin.ignore();
    cout << "Name: "; cin.getline(name, 20);
    cout << "Price: "; cin >> price;
    cout << "Quantity: "; cin >> quantity;
    cout << "Expiration day:" << endl;
    cout << "Day: "; cin >> d;
    cout << "Month: "; cin >> m;
    cout << "Year: "; cin >> y;

    if (d > 31 || m > 12 || y < 2021) {
        cout << "Invalid Date" << endl;
        terminate();
    }
}

void CDrugStore::display() {
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Expiration day: " << to_string(d) << "/" << to_string(m) << "/" << to_string(y) << endl;
    cout << "===================" << endl;
}

void CDrugStore::storeDrug() {
    ofstream fout;

    fout.open("data.dat", ios::app | ios::binary);
    fout.write((char*)this, sizeof(*this));
    fout.close();
}

void CDrugStore::displayAll() {
    ifstream fin;
    fin.open("data.dat", ios::in | ios::binary);
    fin.read((char*)this, sizeof(*this));
    while (!fin.eof()) {
        display();
        fin.read((char*)this, sizeof(*this));
    }
    fin.close();
}