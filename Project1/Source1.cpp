/******************************************************************************

 CSCI 1101 - Calculator (Part C)

 Team Coordinator: [Steven Klimp]

 Collaborator #1: [Marko Trevino]
 Collaborator #2: [Adrian Mascorro]

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

double sq(double a);
double sqroot(double a);

int main() {
    double num1;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (^, s): ";
    cin >> operation;

    double result;

    switch (operation) {
    case '^':
        result = sq(num1);
        break;
    case 's':
        result = sqroot(num1);
        break;
    default:
        cerr << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}

// Feature 5: Square function.
// Created by: [Marko Trevino]
double sq(double a) {
    return 0;
}

// Feature 6: Square Root. Use the pre-defined function: sqrt(x)
// Created by: [Adrian Mascorro]
double sqroot(double a) {
    return 0;
}


