#include <iostream>
using namespace std;

//Abstraction
//Abstract Classes and Pure Virtual Functions

//abstract class
class Shape {
public:
    virtual void draw() = 0; //pure virtual function / abstract function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "draw circle\n";
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "draw square\n";
    }
};

int main () {
    Circle cir1;
    cir1.draw();

    Square squ1;
    squ1.draw();

    return 0;
}
