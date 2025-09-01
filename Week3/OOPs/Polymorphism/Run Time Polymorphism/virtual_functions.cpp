#include <iostream>
using namespace std;

//Virtual Functions
class Parent {
public:
    void show() {
        cout << "parent class show..\n";
    }

    virtual void hello() {
        cout << "parent hello\n";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "child class show..\n";
    }

    void hello() {
        cout << "child hello\n";
    }
};

int main () {
    Child child1;
    Parent *ptr; //pointing to the object of parent class

    ptr = &child1; //Run Time Binding
    ptr->hello(); //Virtual Function

    return 0;
}
