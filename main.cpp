#include <iostream>
#include "array.h"
#include "list.h"
#include "queue.h"
#include "stack.h"
using namespace std;

int main() {
    int choice = 0;
    while (choice != 5){
        cout << "1. Array/Vector" << endl;
        cout << "2. Singly Linked List" << endl;
        cout << "3. Stack" << endl;
        cout << "4. Queue" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your Choice (1-5): ";
        cin >> choice;

        switch(choice){
            case 1:
                arrayMenu();
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                break;
            default:
                break;
        }
    }
    
    return 0;
}