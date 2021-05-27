#pragma once
#include "CAnimal.h"
#include <iostream>
#include <string>

using namespace std;

class CCat : public CAnimal {
public:
    CCat() :CAnimal() {};
    CCat(string name, int age = 0) :CAnimal(name, age) {};
    void talk() {
        cout << "I'm " << name << " Myau Myau..\n";
    }
    string type() {
        return "cat";
    }
};

class CLion : public CAnimal {
public:
    CLion() :CAnimal() {};
    CLion(string name, int age = 0) :CAnimal(name, age) {};
    void talk() {
        cout << "I'm " << name << " Roar Roar..\n";
    }
    string type() {
        return "lion";
    }
};

class CDuck : public CAnimal {
public:
    CDuck() :CAnimal() {};
    CDuck(string name, int age = 0) :CAnimal(name, age) {};
    void talk() {
        cout << "I'm " << name << " Kvak Kvak..\n";
    }
    string type() {
        return "duck";
    }
};