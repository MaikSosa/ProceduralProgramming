/***********************************************************************
* Program:
*    Assignment 1.4 Functions
*    Mike Sosa, CS124
* Author:
*    Mike Sosa
* Summary:
*    This program will contain two functions that display a message and an
*    answer.
*
*
*   JetBrains for the win.
************************************************************************/
#include <iostream>

using namespace std;

void questionPeter(){
    cout << "Lord, how often shall my brother sin against me, and I forgive him?\n"
    << "Till seven times?\n";
}

int responseLord(){
    return 7 * 70;
}

int main()
{
// ask Peter's question
    questionPeter();
// the first part of the Lord's response
    cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
    cout << "times: but, Until " << responseLord() << ".\n";
    return 0;
}