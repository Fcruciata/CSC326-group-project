#include <iostream>
#include "validation.h"
using namespace std;

bool validate(int& input){
    if (!(cin >> input)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please enter an integer." << endl;
        return false;
    }

    return true;
}