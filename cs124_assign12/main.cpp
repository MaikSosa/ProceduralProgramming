/***********************************************************************
 * This demo program is designed to:
 *      Demonstrate how to declare many types of variables and
 *      accept input from the user
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double income;
    cout << "\tYour monthly income: ";
    cin >> income;
    // The formatting on these assignments were so annoying. I can't understand why the setw() on the next line.
    cout << "Your income is: $" << setw(9) << income;
    return 0;
}
