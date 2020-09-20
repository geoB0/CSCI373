#include <iostream>
#include "platonicsolids.h"
using namespace std;

template <class T>
PlatonicSolid<T>* createFigure(int figuretype);

template <class T>
void figureProperties(PlatonicSolid<T>* figure);

int main() {
    int figuretype = -1;

    // loop until type is -1
    do {
        // prompt user to enter type of the figure
        // add the user prompt here
        cout << "Enter the figure type: ";
        cin >> figuretype;
        // use `createFigure` function to create an object for a specified figure
        // use `figureProperties` function to show the figure properties
        // !!!Note: Do not forgate to handle your memory correctly!!!
    } while (figuretype != -1);
    cout << "Goodbye!" << endl;
    return 0;
}
