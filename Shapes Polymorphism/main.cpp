#include <iostream>
#include "CShape.h";
#include "CRectangle.h";
#include "CTriangle.h";

using namespace std;


int ChoiceMenu() {
    cout << "========================" << endl;
    int choice;
    cout << "1. Add new Triangle" << endl;
    cout << "2. Add new Rectangle" << endl;
    cout << "3. Show data for all Shapes" << endl;
    cout << "4. Show sum of all Shape Sizes" << endl;
    cout << "5. Show the color of all Rectangles" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
    cout << "Choose option: "; cin >> choice;
    cout << "========================" << endl;

    return choice;
}

int main() {
    int n = 30; //Number of maxinum shapes
    int lastFigure = 0;

    CShape** figuresArr = new CShape * [n];

    while (true) {
        switch (ChoiceMenu()) {
        // Add new Triangle
        case 1: 
        {   
            figuresArr[lastFigure] = new CTriangle;
            figuresArr[lastFigure]->getData();
            lastFigure++;
            continue;
        }
        // Add new Rectangle
        case 2: 
        {
            figuresArr[lastFigure] = new CRectangle;
            figuresArr[lastFigure]->getData();
            lastFigure++;
            continue;
        }
        // Show data for all Shapes
        case 3: 
        {
            for (int i = 0; i < lastFigure; i++) {
                figuresArr[i]->display();
            }
            continue;
        }
        // Show sum of all Shape Sizes
        case 4: 
        {
            float sumSize = 0;

            for (int i = 0; i < lastFigure; i++) {
                sumSize += figuresArr[i]->getSize();
            }

            cout << "Summed Size = " << sumSize << endl;
            continue;
        }
        // Show the color of all Rectangles
        case 5: 
        {
            for (int i = 0; i < lastFigure; i++) {
                if (figuresArr[i]->getType() == "Rectangle") {
                    cout << figuresArr[i]->getColor() << endl;
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
}

