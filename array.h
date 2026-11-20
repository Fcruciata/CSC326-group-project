#include <vector>
#include <string>

class myArray{
public:
myArray();
void insert(int index, int value);
void remove(int index, int value);
void display();
void search(int target);
                
private:
    vector<int> arr;
};

myArray::myArray(){
    arr = {10, 20, 30};
}

void myArray::insert(int index, int value){
    cout << "insert" << value;
}

void myArray::remove(int index, int value){
    cout << "remove" << value;
}

void myArray::display(){
    cout << "display";
}

void myArray::search(int target){
    cout << "search" << target;
}