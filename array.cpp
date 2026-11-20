#include <iostream>
#include <vector>
#include <string>
#include "array.h"
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
    cout << "Index:" << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << "   " << i;
    }
    cout << endl;
    cout << "Value:" << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << "   " << arr[i];
    }
    cout << endl;
}

void myArray::search(int target){
    display();
    for (int i = 0; i < arr.size(); i++){
        cout << i << " = " << arr[i] << endl;
        if(arr[i] == target){
            cout << "Target Found" << endl;
            return;
        } else {
            cout << "Check next index" << endl;
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
    
    cout << "You chose Array/Vector. \n Select what you want to see!"<< endl;

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
                cout << "Enter index:";
                cin >> index;
                arr.remove(index);
                break;

            case 5://back to main
                break;

            default:
                break;
        }
    }
}