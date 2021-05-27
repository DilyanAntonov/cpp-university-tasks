#pragma once
#include <string>

using namespace std;

class CAnimal {
protected:
    string name;
    short int age;
public:
    CAnimal() {
        name = "Unknown";
        age = 0;
    }
    CAnimal(string name, short int age) {
        this->name = name;
        this->age = age;
    }
    string getName() {
        return this->name;
    }
    virtual void talk() = 0;
    virtual string type() = 0;
};