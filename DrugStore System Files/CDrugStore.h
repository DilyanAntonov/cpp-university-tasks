#pragma once
#include <string>

using namespace std;

class CDrugStore {
private:
    char name[20];
    float price;
    int quantity;
    int d, m, y;
public:
    void getData();
    void display();
    void storeDrug();
    void displayAll();
};



