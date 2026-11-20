#include <vector>
#include <string>
using namespace std;

class myArray{
public:
myArray();
void insert(int index, int value);
void remove(int index);
void display();
void search(int target);
                
private:
    vector<int> arr;
};

void arrayMenu();