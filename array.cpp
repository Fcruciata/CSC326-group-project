#include <iostream>
#include <string>
#include "array.h"
#include "main.cpp"
using namespace std;

int main() {   
    int choice = 0;
    int value;
    int index;
    int target;

    //create array
    myArray arr = myArray();
    
    cout << "You chose Array/Vector. /n Select what you want to see!"<< endl;

    while (choice != 5){
        cout << "1. Display" << endl;
        cout << "2. Search" << endl;
        cout << "3. Insert at Index" << endl;
        cout << "4. Remove at Index" << endl;
        cout << "5. Return to Main" << endl;

        cout << "Enter your Choice (1-5): ";
        cin >> choice;

        switch(choice){
            case 1: //Display
                arr.display();
                break;
            case 2: //Search
                cout << "Enter target:";
                cin >> target;
                arr.search(target);
                break;
            case 3: //Insert
                cout << "Enter value:";
                cin >> value;
                cout << "Enter index:";
                cin >> index;
                arr.insert(index, value);

                break;
            case 4://Remove
                 cout << "Enter value:";
                cin >> value;
                cout << "Enter index:";
                cin >> index;
                arr.remove(index, value);
                
                break;
            case 5://back to main
                
                break;
            default:
                break;
        }
    }
}