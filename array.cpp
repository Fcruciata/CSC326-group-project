#include <iostream>
#include <vector>
#include "array.h"
#include "validation.h"

using namespace std;

myArray::myArray(){
    arr = {10, 20, 30};
}

void myArray::insert(int index, int value){
    if (index < 0 || index > arr.size()){
        cout << "Invalid index" << endl;
        return;
    }

    cout << "Before" << endl;
    display();

    arr.resize(arr.size() + 1);

    for(int i = arr.size()-1; i > index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;

    cout << "After" << endl;
    display();

    cout << "Insertion is Successful!" << endl;
}

void myArray::remove(int index){
    if (index < 0 || index >= arr.size()){
        cout << "Invalid index" << endl;
        return;
    }

    cout << "Before" << endl;
    display();

    for(int i = index; i < arr.size()-1; i++){
        arr[i] = arr[i+1];
    }

    arr.resize(arr.size() - 1);

    cout << "After" << endl;
    display();

    cout << "Deletion is Successful!" << endl;
}

void myArray::display(){
    if (arr.empty()){
        cout << "Array is empty." << endl;
        return;
    }

    cout << "Index:  ";
    for (int i = 0; i < arr.size(); i++){
        cout << "  " << i << "  ";
    }
    cout << endl;
    cout << "Value:  ";
    for (int i = 0; i < arr.size(); i++){
        cout << "[" << arr[i] << "] ";
    }
    cout << endl;
}

void myArray::search(int target){
    display();
    cout << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << "Index " << i << " = " << arr[i] << endl;
        if(arr[i] == target){
            cout << "Target Found at i = " << i << endl;
            return;
        } else {
            cout << "Check Next Index" << endl;
        }
    }
    cout << "Target Not Found" << endl;
}


void arrayMenu() {   
    int choice = 0;
    int value;
    int index;
    int target;

    //create array
    myArray arr = myArray();
    
    cout << "\n You chose Array/Vector. Select what you want to see! \n"<< endl;

    while (choice != 5){
        cout << "1. Display" << endl;
        cout << "2. Search" << endl;
        cout << "3. Insert at Index" << endl;
        cout << "4. Remove at Index" << endl;
        cout << "5. Return to Main" << endl;

        cout << "Enter your Choice (1-5): ";
        if(!validate(choice)){
            continue;
        }


        switch(choice){
            case 1: //Display
                cout << endl;
                arr.display();
                cout << endl;
                cout << "Time Complexity is O(n)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Traverses the entire array" << endl;
                cout << endl;
                break;

            case 2: //Search
                cout << endl;
                cout << "Enter target: ";

                if(!validate(target)){
                    continue;
                }

                arr.search(target);
                cout << endl;
                cout << "Time Complexity is O(n)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Checks elements sequentially" << endl;
                cout << endl;
                break;

            case 3: //Insert
                cout << endl;
                cout << "Enter value: ";
                if(!validate(value)){
                    continue;
                }
 
                cout << "Enter index: ";
                if(!validate(index)){
                    continue;
                }

                arr.insert(index, value);
                cout << endl;
                cout << "Time Complexity is O(n)" << endl;
                cout << "Space Complexity is O(n)*" << endl;
                cout << "Reason: Resizes the vector and shifts element right" << endl;
                cout << endl;
                break;

            case 4://Remove
                cout << endl;
                cout << "Enter index: ";
                if(!validate(index)){
                    continue;
                }
                arr.remove(index);

                cout << endl;
                cout << "Time Complexity is O(n)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Shifts elements left" << endl;
                cout << endl;
                break;

            case 5://back to main
                cout << endl;
                break;
            default:
                cout << "Invalid Selection!" << endl;
                break;
        }
    }
}
