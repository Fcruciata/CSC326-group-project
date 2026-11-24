#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
using namespace std;

class myQueue{
public:
    myQueue();
    void enqueue(int value);
    void dequeue();
    void front();
    void back();
    bool empty();
    void size();
    void display();
                
private:
    queue<int> que;
};

void queueMenu();

#endif