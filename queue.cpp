#include <iostream>
#include <queue>
#include "queue.h"
#include "validation.h"
using namespace std;

myQueue::myQueue(){
    que.push(10);
    que.push(20);
    que.push(30);
}

void myQueue::enqueue(int value){
    cout << "Before" << endl;
    display();

    que.push(value);

    cout << "After" << endl;
    display();
}

void myQueue::dequeue(){
    if (que.empty()){
        cout << "Queue has no elements";
    } else {
        cout << "Before" << endl;
        display();

        que.pop();

        cout << "After" << endl;
        display();
    }
}

void myQueue::front(){
    if (que.empty()){
        cout << "Queue is empty." << endl;
    }else{
        cout << "Front is " << que.front() << endl;
    }
}

void myQueue::back(){
    if (que.empty()){
        cout << "Queue is empty." << endl;
    }else{
        cout << "Back is " << que.back() << endl;
    }
}

bool myQueue::empty(){
    return que.empty();
}

void myQueue::size(){
    cout << "This Queue has " << que.size() << " elements." << endl;
}

void myQueue::display(){
    if (que.empty()){
        cout << "Queue is empty." << endl;
    }else{

        cout << "front -> ";
        queue<int> temp = que;
        
        while(!temp.empty()){
            cout << " [" << temp.front() << "] ";
            temp.pop();
        }

        cout << " <- rear";
        cout << endl;
    }
}

void queueMenu() {   
    int choice = 0;
    int value;

    //create Queue
    myQueue que = myQueue();
    
    cout << "\n You chose Queue. Select what you want to see! \n"<< endl;

    while (choice != 8){
        cout << "1. Front" << endl;
        cout << "2. Back" << endl;
        cout << "3. Enqueue" << endl;
        cout << "4. Dequeue" << endl;
        cout << "5. Size" << endl;
        cout << "6. Empty" << endl;
        cout << "7. Display" << endl;
        cout << "8. Return to Main" << endl;

        cout << "Enter your Choice (1-8): ";

        if(!validate(choice)){
            continue;
        }
                
        switch(choice){
            case 1: //Front
                cout << endl;
                que.front();
                cout << endl;
                cout << "Time Complexity is O(1)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Accesses the first element directly" << endl;
                cout << endl;
                break;

            case 2: //Back
                cout << endl;    
                que.back(); 
                cout << endl;
                cout << "Time Complexity is O(1)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Accesses the last element directly" << endl;
                cout << endl;
                break;

            case 3: //Enqueue
                cout << endl;
                cout << "Enter Value: ";                
                if(!validate(value)){
                    continue;
                }

                que.enqueue(value);
                
                cout << endl;
                cout << "Time Complexity is O(1)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Adds an element to the rear" << endl;
                cout << endl;
                break;

            case 4://Dequeue
                cout << endl;
                que.dequeue();   
                cout << endl;
                cout << "Time Complexity is O(1)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Removes an element from the front" << endl;
                cout << endl;            
                break;

            case 5: //Size
                cout << endl;
                que.size();
                cout << endl;
                cout << "Time Complexity is O(1)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Retrieves the number of elements" << endl;
                cout << endl;
                break;

            case 6: //Empty
                cout << endl;
                cout << "Is the Queue Empty: " << boolalpha << que.empty();
                cout << endl << endl;
                cout << "Time Complexity is O(1)" << endl;
                cout << "Space Complexity is O(1)" << endl;
                cout << "Reason: Checks whether the queue is empty" << endl;
                cout << endl;
                break;

            case 7: //Display
                cout << endl;
                que.display();
                cout << "Time Complexity is O(n)" << endl;
                cout << "Space Complexity is O(n)" << endl;
                cout << "Reason: Copies and traverses the entire queue" << endl;
                cout << endl;
                break;

            case 8://back to main
                cout << endl;
                break;
            default:
                cout << "Invalid Selection!" << endl;
                break;
        }
    }
}
