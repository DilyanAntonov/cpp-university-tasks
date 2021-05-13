#include "CTree.h"
#include <iostream>
#include <string>

using namespace std;

CTree::CTree(float height, int type) {
	this->height = height;
	this->type = type;
}

CTree::CTree() {
	this->height = 0.0;
	this->type = 0;
}

CTree::~CTree(void) {
}

void CTree::getData() {
	CPlant::getData();
	cout << "Height: "; cin >> this->height;
	cout << "Type (1 coniferous / 2 deciduous): "; cin >> this->type;
}

void CTree::display() {
	CPlant::display();

	string treeType = (this->type == 1) ? "coniferous (1)" : "deciduous (2)";

	cout << "Height: " << this->height << endl;
	cout << "Type: " << treeType << endl;
}

float CTree::getHeight() {
	return this->height;
}

int CTree::getType() {
	return this->type;
}

string CTree::plantType() {
	return "tree";
}