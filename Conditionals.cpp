#include <iostream>
using namespace std;

int main() {

    // one-condition if/else statement

    int temp = 50; // in fahrenheit
    if (temp < 50) {
        cout << "It's cold out" << endl;
    } else {
        cout << "It's warm out" << endl;
    } 
    // Output: It's warm out

    // multi-condition if/else statement

    if (temp > 49 && temp < 61) {
        cout << "Fall weather!" << endl;
    } else {
        cout << "Not fall weather :(" << endl;
    } 
    // Output: Fall weather!

    //if-elseif-else statement

    int temp2 = 65;
    if (temp2 < 60) {
        cout << "It's cold!" << endl;
    } else if (temp2 < 85) {
        cout << "Good weather!" << endl;
    } else {
        cout << "It's hot!" << endl;
    } 
    // Output: Good weather!

    // switch statement
    
    int month = 10;
    switch (month) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
    } 
    // Output: October

    // LOOPS:

    // for loop
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    // Output: 1 2 3 4 5

    // while loop
    int j = 1; // initialize condition
    while (j <= 5) {
        cout << j << " ";
        j++; // update condition
    }
    cout << endl;
    // Output: 1 2 3 4 5

    // do while loop
    int k = 1; // initialize condition
    do {
        cout << k << " ";
        k++; // update condition
    } while (k <= 5);
    // Output: 1 2 3 4 5

    return 0;
}

/* Sources:
https://www.w3schools.com/cpp/cpp_conditions_elseif.asp
https://www.w3schools.com/cpp/cpp_switch.asp */