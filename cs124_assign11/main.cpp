/***********************************************************************
* Program:
*    Monthly Budget
*    Mike Sosa, CS124
* Author:
*    Mike Sosa
* Summary:
*    This program will output your monthly budget. The main purpose
*    of the program is to practice output and printing.
*
*
*   JetBrains for the win.
************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);          //Want to show two decimals

    //Title fo the table
    cout << "\tItem" << setw(21) << "Projected\n";
    cout << "\t=============" << setw(13) << "==========\n";

    //Contents of the table
    cout << "\tIncome" << setw(10) << "$" << setw(9) << 1000.00 << endl ;
    cout << "\tTaxes" << setw(11) << "$" << setw(9) << 100.00 << endl ;
    cout << "\tTithing" << setw(9) << "$" << setw(9) << 100.00 << endl ;
    cout << "\tLiving" << setw(10) << "$" << setw(9) << 650.00 << endl ;
    cout << "\tOther" << setw(11) << "$" << setw(9) << 90.00 << endl ;
    cout << "\t=============" << setw (13) << "==========\n";
    cout << "\tDelta" << setw (11) << "$" << setw(9) << 60.00 << endl ;
    return 0;
}
