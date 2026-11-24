#include <iostream>
#include <queue>
#include <string>
#include "queue.h"
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
    
}

void myQueue::back(){

}

bool myQueue::empty(){
    
}

void myQueue::size(){

}

void myQueue::display(){
    cout << "front ->";
    


    cout << "<- rear";
    cout << endl;
}

void queueMenu() {   
    int choice = 0;
    int value;

    //create Queue
    myQueue que = myQueue();
    
    cout << "\n You chose Queue. Select what you want to see! \n"<< endl;

    while (choice != 6){
        cout << "1. Front" << endl;
        cout << "2. Back" << endl;
        cout << "3. Enqueue" << endl;
        cout << "4. Dequeue" << endl;
        cout << "5. Size" << endl;
        cout << "6. Return to Main" << endl;

        cout << "Enter your Choice (1-6): ";

        if (!(cin >> choice)){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch(choice){
            case 1: //Front
                que.front();
                break;

            case 2: //Back
                que.back(); 
                break;

            case 3: //Enqueue
                cout << "Enter Value: ";
                cin >> value;
                que.enqueue(value);
                break;

            case 4://Dequeue
                que.dequeue();                
                break;

            case 5: //Size

                break;

            case 6://back to main
                break;

            default:
                break;
        }
    }
}
