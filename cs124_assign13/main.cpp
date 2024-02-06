/***********************************************************************
* Program:
*    Assignment 1.3 Expressions
*    Mike Sosa, CS124
* Author:
*    Mike Sosa
* Summary:
*    Write a program to convert Fahrenheit to Celsius. This program will prompt the user for the Fahrenheit
*    number and convert it to Celsius. The equation is: C = 5/9(F – 32)
*
*
*   JetBrains for the win.
************************************************************************/
#include <iostream>

using namespace std;

int main() {
    double faren = 0.0;
    cout << "Please enter Fahrenheit degrees: ";
    cin >> faren;
    double celsius = 5.0 / 9.0 * (faren - 32);
    cout << "Celsius: " << celsius;
    return 0;
};